/*
 * XREFs of ?InitializeMonitorDpiRectsAndTransforms@@YAXPEAUtagMONITOR@@G@Z @ 0x1C006BA6C
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C004812C (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     ScaleDPIRect @ 0x1C0048E30 (ScaleDPIRect.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

void __fastcall InitializeMonitorDpiRectsAndTransforms(struct tagMONITOR *a1, unsigned __int16 a2)
{
  struct tagPOINT *v2; // r12
  __int64 v3; // rdi
  int i; // ebp
  unsigned __int16 v6; // r13
  int *v7; // r15
  char *v8; // rax
  void **v9; // r14
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rax
  float v13; // xmm4_4
  float v14; // xmm0_4
  unsigned __int16 v15; // [rsp+70h] [rbp+8h]
  unsigned __int16 v16; // [rsp+78h] [rbp+10h]
  _DWORD *v17; // [rsp+80h] [rbp+18h]

  v16 = a2;
  v2 = (struct tagPOINT *)((char *)a1 + 28);
  v3 = *(_QWORD *)((char *)a1 + 28);
  v15 = *((_WORD *)a1 + 76);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v7 = (int *)((char *)a1 + 60);
      v9 = (void **)((char *)a1 + 568);
      v10 = 0;
      v6 = *((_WORD *)gpsi + 3643);
      v8 = (char *)a1 + 108;
    }
    else
    {
      v6 = 96;
      v7 = (int *)((char *)a1 + 44);
      v8 = (char *)a1 + 92;
      v9 = (void **)((char *)a1 + 560);
      v10 = 1;
    }
    v17 = v8;
    v11 = (__int64)ExpandMonitorSpaceVertex(v10, a2, *v2);
    ScaleDPIRect(v7, (__m128i *)v2, v6, v15, v11, v3);
    ScaleDPIRect(v17, (__m128i *)((char *)a1 + 76), v6, v15, v11, v3);
    if ( *((_WORD *)a1 + 76) == v6 && v2->x == *v7 && *((_DWORD *)a1 + 8) == v7[1] )
    {
      if ( *v9 )
      {
        Win32FreePool();
        *v9 = 0LL;
      }
    }
    else if ( *v9 || (v12 = Win32AllocPoolWithQuota(), (*v9 = (void *)v12) != 0LL) )
    {
      memset(*v9, 0, 0x40uLL);
      v13 = (float)v6;
      v14 = (float)*((unsigned __int16 *)a1 + 76) / v13;
      *(float *)*v9 = v14;
      *((float *)*v9 + 5) = v14;
      *((_DWORD *)*v9 + 10) = 1065353216;
      *((_DWORD *)*v9 + 15) = 1065353216;
      *((float *)*v9 + 12) = (float)v2->x - (float)((float)((float)*v7 * (float)*((unsigned __int16 *)a1 + 76)) / v13);
      *((float *)*v9 + 13) = (float)*((int *)a1 + 8)
                           - (float)((float)((float)v7[1] * (float)*((unsigned __int16 *)a1 + 76)) / v13);
    }
    a2 = v16;
  }
}
