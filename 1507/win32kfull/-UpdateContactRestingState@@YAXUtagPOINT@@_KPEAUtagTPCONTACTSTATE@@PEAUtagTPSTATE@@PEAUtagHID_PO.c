/*
 * XREFs of ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F28F4
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F2F3C (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1E68 (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

void __fastcall UpdateContactRestingState(
        struct tagPOINT a1,
        __int64 a2,
        struct tagTPCONTACTSTATE *a3,
        struct tagTPSTATE *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  struct tagTPCONTACTSTATE *v5; // r10
  unsigned __int64 v6; // r11
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r9d
  int v13; // ebx
  unsigned int v14; // r11d
  LONG y; // edi
  int v16; // eax
  int v17; // edx
  unsigned int v18; // ecx

  v5 = a3;
  v6 = a2 - *((_QWORD *)a3 + 7);
  v9 = a2 - *((_QWORD *)a3 + 5);
  if ( (*((_DWORD *)a4 + 316) & 0x20000) == 0 )
  {
    v10 = *((_DWORD *)v5 + 42);
    if ( (v10 & 0x200) != 0 )
      *((_DWORD *)v5 + 42) = v10 & 0xFFFFFDFF;
  }
  v11 = *((_DWORD *)v5 + 42);
  v12 = 0;
  if ( (v11 & 0x100) == 0 && v9 && !*((_DWORD *)v5 + 21) )
    *((_DWORD *)v5 + 42) = v11 | 0x100;
  if ( v6 >= gliQpcFreq.QuadPart * (dword_1C03236C4 / 10) / 1000 || !v9 )
  {
    if ( v9 )
    {
      v13 = -__CFSHR__(*((_DWORD *)v5 + 42), 8);
      v14 = *((_DWORD *)v5 + 42) & 0xFFFFFF7F;
      *((_DWORD *)v5 + 42) = v14;
      if ( (*((_DWORD *)a4 + 316) & 0x20000) == 0 )
      {
        y = a1.y;
        if ( a1.y >= *((_DWORD *)a4 + 311) || (unsigned int)PointInsideCurtainRegion(a1, a5) && v13 )
        {
          if ( (v14 & 0x100) != 0 )
            v12 = *((_DWORD *)v5 + 21);
          v16 = HIDWORD(*((_QWORD *)v5 + v12 + 11)) - y;
          v17 = *((_QWORD *)v5 + v12 + 11) - a1.x;
          if ( v17 * v17 + v16 * v16 <= (unsigned __int64)(unsigned int)dword_1C03236C0 )
            *((_DWORD *)v5 + 42) = v14 | 0x80;
        }
      }
    }
    else if ( a1.y >= *((_DWORD *)a4 + 311) || (unsigned int)PointInsideCurtainRegion(a1, a5) )
    {
      *((_DWORD *)v5 + 42) |= 0x80u;
    }
    *((struct tagPOINT *)v5 + *((unsigned int *)v5 + 21) + 11) = a1;
    v18 = *((_DWORD *)v5 + 21) + 1;
    *((_QWORD *)v5 + 7) = a2;
    *((_DWORD *)v5 + 21) = v18 % 0xA;
  }
}
