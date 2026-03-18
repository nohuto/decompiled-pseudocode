/*
 * XREFs of ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E8EE0
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01E82E8 (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z @ 0x1C01E84F0 (-SetContactRestingState@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@H@Z.c)
 */

void __fastcall UpdateContactRestingState(
        struct tagPOINT a1,
        __int64 a2,
        struct tagTPCONTACTSTATE *a3,
        struct tagTPSTATE *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  struct tagTPCONTACTSTATE *v5; // r11
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  char v11; // cl
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r14
  int v15; // edi
  struct tagPOINT v16; // r10
  LONG v17; // r8d
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  int v20; // edx
  unsigned int v21; // r8d
  struct tagTPCONTACTSTATE *v22; // rcx
  int v23; // r8d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rbp
  _DWORD *v26; // r10
  struct tagTPCONTACTSTATE *v27; // rdi
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r8
  int v31; // eax
  int v32; // r8d
  struct tagTPSTATE *v33; // rdx
  LONG y; // [rsp+54h] [rbp+Ch]

  y = a1.y;
  v5 = a3;
  v9 = a2 - *((_QWORD *)a3 + 9);
  v10 = a2 - *((_QWORD *)v5 + 7);
  if ( *((_DWORD *)a4 + 416) != 6 || (v11 = 1, (*((_DWORD *)v5 + 66) & 0x80u) != 0) )
    v11 = 0;
  v12 = *((_DWORD *)v5 + 66);
  v13 = 0x20C49BA5E353F7CFLL;
  if ( (v12 & 0x200) == 0 && !v11 )
  {
    if ( (v12 & 0x100) == 0 && v10 && !*((_DWORD *)v5 + 31) )
      *((_DWORD *)v5 + 66) = v12 | 0x100;
    v14 = dword_1C03280E4;
    if ( v9 >= gliQpcFreq.QuadPart * (dword_1C03280E4 / 10) / 1000 || !v10 )
    {
      if ( v10 )
      {
        v15 = -__CFSHR__(*((_DWORD *)v5 + 66), 8);
        SetContactRestingState(v5, a4, 0);
        v17 = y;
        if ( y >= *((_DWORD *)a4 + 471) && (v15 || *((_DWORD *)a4 + 415) == 1 && !*((_DWORD *)a4 + 414))
          || PointInsideCurtainRegion(v16, a5) && v15 )
        {
          v18 = (*((_DWORD *)v5 + 66) & 0x100) != 0 ? *((unsigned int *)v5 + 31) : 0LL;
          if ( (int)((*((_QWORD *)v5 + v18 + 17) - v16.x) * (*((_QWORD *)v5 + v18 + 17) - v16.x)
                   + (HIDWORD(*((_QWORD *)v5 + v18 + 17)) - v17) * (HIDWORD(*((_QWORD *)v5 + v18 + 17)) - v17)) <= (unsigned __int64)(unsigned int)dword_1C03280E0 )
            SetContactRestingState(v5, a4, 1);
        }
        v19 = gliQpcFreq.QuadPart * v14 / 1000;
        if ( *((_DWORD *)a4 + 416) != 1 || !v15 || (*((_DWORD *)v5 + 66) & 4) == 0 || v10 >= v19 )
          goto LABEL_41;
        v20 = 1;
        v21 = 0;
        do
        {
          if ( v21 >= 6 )
            break;
          v22 = (struct tagTPSTATE *)((char *)a4 + 272 * v21);
          if ( v5 != v22 && (*((_DWORD *)v22 + 66) & 1) != 0 && a2 - *((_QWORD *)v22 + 7) < v19 )
            v20 = 0;
          ++v21;
        }
        while ( v20 );
        if ( !v20 )
          goto LABEL_41;
        v23 = 0;
      }
      else
      {
        if ( a1.y < *((_DWORD *)a4 + 471) && !PointInsideCurtainRegion(a1, a5) )
          goto LABEL_42;
        v23 = 1;
      }
      SetContactRestingState(v5, a4, v23);
LABEL_41:
      v13 = 0x20C49BA5E353F7CFLL;
LABEL_42:
      *((struct tagPOINT *)v5 + *((unsigned int *)v5 + 31) + 17) = v16;
      v24 = *((_DWORD *)v5 + 31) + 1;
      *((_QWORD *)v5 + 9) = a2;
      *((_DWORD *)v5 + 31) = v24 % 0xA;
    }
  }
  v25 = (unsigned int)dword_1C0328158;
  v26 = (_DWORD *)((char *)a4 + 264);
  do
  {
    if ( (*v26 & 1) != 0 )
    {
      v27 = (struct tagTPCONTACTSTATE *)(v26 - 66);
      if ( v26 - 66 != (_DWORD *)v5 && ((*v26 & 0x80u) != 0 || (*((_DWORD *)v5 + 66) & 0x80u) != 0) )
      {
        v28 = *((_QWORD *)v26 - 26);
        v29 = *((_QWORD *)v5 + 7);
        if ( v28 <= v29 )
          v30 = v29 - v28;
        else
          v30 = v28 - v29;
        if ( v30 < ((unsigned __int64)((unsigned __int128)(300 * gliQpcFreq.QuadPart * (__int128)v13) >> 64) >> 63)
                 + ((__int64)((unsigned __int128)(300 * gliQpcFreq.QuadPart * (__int128)v13) >> 64) >> 7) )
        {
          v31 = *((_DWORD *)a4 + 471);
          if ( *((_DWORD *)v5 + 1) >= v31 && *(v26 - 65) >= v31 )
          {
            v32 = *(_QWORD *)v5 - *(_QWORD *)v27;
            if ( (int)(v32 * v32
                     + (HIDWORD(*(_QWORD *)v5) - HIDWORD(*(_QWORD *)v27))
                     * (HIDWORD(*(_QWORD *)v5) - HIDWORD(*(_QWORD *)v27))) <= v25 )
            {
              SetContactRestingState(v5, a4, 0);
              SetContactRestingState(v27, v33, 0);
              *((_DWORD *)v5 + 66) |= 0x200u;
              *v26 |= 0x200u;
            }
          }
        }
      }
    }
    v26 += 68;
    v13 = 0x20C49BA5E353F7CFLL;
  }
  while ( v26 - 66 != (_DWORD *)((char *)a4 + 1632) );
}
