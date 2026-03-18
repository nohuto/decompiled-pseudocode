/*
 * XREFs of ?UpdateContactRestingState@@YAXUtagPOINT@@_KPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F2BD8
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F20D0 (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

void __fastcall UpdateContactRestingState(
        struct tagPOINT a1,
        __int64 a2,
        struct tagTPCONTACTSTATE *a3,
        struct tagTPSTATE *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  int v9; // eax
  int v10; // eax
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  LONG y; // ebx
  int v14; // r11d
  int v15; // eax
  int v16; // edx
  unsigned int v17; // ecx

  v5 = a2 - *((_QWORD *)a3 + 7);
  v6 = a2 - *((_QWORD *)a3 + 5);
  if ( (*((_DWORD *)a4 + 386) & 0x20000) == 0 )
  {
    v9 = *((_DWORD *)a3 + 53);
    if ( (v9 & 0x200) != 0 )
      *((_DWORD *)a3 + 53) = v9 & 0xFFFFFDFF;
  }
  v10 = *((_DWORD *)a3 + 53);
  v11 = 0;
  if ( (v10 & 0x100) == 0 && v6 && !*((_DWORD *)a3 + 20) )
    *((_DWORD *)a3 + 53) = v10 | 0x100;
  if ( v5 >= gliQpcFreq.QuadPart * (dword_1C0321F24 / 10) / 1000 || !v6 )
  {
    if ( v6 )
    {
      v12 = *((_DWORD *)a3 + 53) & 0xFFFFFF7F;
      *((_DWORD *)a3 + 53) = v12;
      if ( (*((_DWORD *)a4 + 386) & 0x20000) == 0 )
      {
        y = a1.y;
        if ( a1.y >= *((_DWORD *)a4 + 377) || PointInsideCurtainRegion(a1, a5) && v14 )
        {
          if ( (v12 & 0x100) != 0 )
            v11 = *((_DWORD *)a3 + 20);
          v15 = HIDWORD(*(_QWORD *)((char *)a3 + 8 * v11 + 84)) - y;
          v16 = *(_QWORD *)((char *)a3 + 8 * v11 + 84) - a1.x;
          if ( v16 * v16 + v15 * v15 <= (unsigned __int64)(unsigned int)dword_1C0321F20 )
            *((_DWORD *)a3 + 53) = v12 | 0x80;
        }
      }
    }
    else if ( a1.y >= *((_DWORD *)a4 + 377) || PointInsideCurtainRegion(a1, a5) )
    {
      *((_DWORD *)a3 + 53) |= 0x80u;
    }
    *(struct tagPOINT *)((char *)a3 + 8 * *((unsigned int *)a3 + 20) + 84) = a1;
    v17 = *((_DWORD *)a3 + 20) + 1;
    *((_QWORD *)a3 + 7) = a2;
    *((_DWORD *)a3 + 20) = v17 % 0xA;
  }
}
