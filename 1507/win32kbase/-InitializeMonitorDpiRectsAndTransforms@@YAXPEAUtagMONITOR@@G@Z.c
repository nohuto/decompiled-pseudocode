/*
 * XREFs of ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C00172E8
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0032870 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ScaleDPIRect @ 0x1C0055D90 (ScaleDPIRect.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0055F40 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

void __fastcall InitializeMonitorDpiRectsAndTransforms(struct tagMONITOR *a1, unsigned __int16 a2)
{
  struct tagPOINT *v2; // r12
  int i; // ebp
  unsigned __int16 v5; // r13
  int *v6; // r15
  int v7; // eax
  void **v8; // r14
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rax
  float v12; // xmm4_4
  float v13; // xmm0_4
  unsigned __int16 v14; // [rsp+70h] [rbp+8h]
  unsigned __int16 v15; // [rsp+78h] [rbp+10h]
  int v16; // [rsp+80h] [rbp+18h]

  v15 = a2;
  v2 = (struct tagPOINT *)((char *)a1 + 28);
  v14 = *((_WORD *)a1 + 76);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v6 = (int *)((char *)a1 + 60);
      v8 = (void **)((char *)a1 + 568);
      v9 = 0;
      v5 = *((_WORD *)gpsi + 3643);
      v7 = (_DWORD)a1 + 108;
    }
    else
    {
      v5 = 96;
      v6 = (int *)((char *)a1 + 44);
      v7 = (_DWORD)a1 + 92;
      v8 = (void **)((char *)a1 + 560);
      v9 = 1;
    }
    v16 = v7;
    v10 = (__int64)ExpandMonitorSpaceVertex(v9, a2, *v2);
    ScaleDPIRect((_DWORD)v6, (_DWORD)v2, v5, v14, v10);
    ScaleDPIRect(v16, (_DWORD)a1 + 76, v5, v14, v10);
    if ( *((_WORD *)a1 + 76) == v5 && v2->x == *v6 && *((_DWORD *)a1 + 8) == v6[1] )
    {
      if ( *v8 )
      {
        Win32FreePool(*v8);
        *v8 = 0LL;
      }
    }
    else if ( *v8 || (v11 = Win32AllocPoolWithQuota(64LL, 2020438869LL), (*v8 = (void *)v11) != 0LL) )
    {
      memset(*v8, 0, 0x40uLL);
      v12 = (float)v5;
      v13 = (float)*((unsigned __int16 *)a1 + 76) / v12;
      *(float *)*v8 = v13;
      *((float *)*v8 + 5) = v13;
      *((_DWORD *)*v8 + 10) = 1065353216;
      *((_DWORD *)*v8 + 15) = 1065353216;
      *((float *)*v8 + 12) = (float)v2->x - (float)((float)((float)*v6 * (float)*((unsigned __int16 *)a1 + 76)) / v12);
      *((float *)*v8 + 13) = (float)*((int *)a1 + 8)
                           - (float)((float)((float)v6[1] * (float)*((unsigned __int16 *)a1 + 76)) / v12);
    }
    a2 = v15;
  }
}
