/*
 * XREFs of ?SetValueForKey@?$FixedSizeMap@UCursorId@@PEAVDWMCursor@@$0DC@@@QEAAJAEBUCursorId@@AEBQEAVDWMCursor@@@Z @ 0x18001EDE4
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z @ 0x18001E934 (-CreateCursor@DWMCursorBroker@@AEAAJW4InputType@@PEAPEAUICursor@@@Z.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x18001F194 (--1DWMCursor@@MEAA@XZ.c)
 *     ?CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z @ 0x180025DC0 (-CreateCursor@MobileCursorBroker@@UEAAJPEAUDeviceInfo@@PEAUIInputDisplay@@KPEAPEAUICursor@@@Z.c)
 *     ??1MobileCursor@@MEAA@XZ @ 0x180026BA4 (--1MobileCursor@@MEAA@XZ.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeMap<CursorId,DWMCursor *,50>::SetValueForKey(__int64 a1, int *a2, _QWORD *a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // r9
  unsigned int v7; // r10d
  int v8; // esi
  int v9; // r9d
  unsigned int v10; // eax
  _DWORD *v11; // rdx
  __int64 v12; // rcx

  v3 = *a2;
  v4 = 0;
  v5 = (_DWORD *)a1;
  v7 = 0;
  LOBYTE(a1) = 0;
  v8 = v5[300];
  if ( *a2 == v8 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 133;
LABEL_4:
      Template_qqq(a1, &MinInput_Warning_CheckResult, 0, v9, v4);
    }
  }
  else
  {
    v10 = 0;
    v11 = v5;
    do
    {
      if ( *v11 == v3 )
      {
        *(_QWORD *)&v5[6 * v10 + 4] = *a3;
        return v4;
      }
      if ( !(_BYTE)a1 && *v11 == v8 )
      {
        v7 = v10;
        LOBYTE(a1) = 1;
      }
      ++v10;
      v11 += 6;
    }
    while ( v10 < 0x32 );
    if ( (_BYTE)a1 )
    {
      v12 = 3LL * v7;
      *(_OWORD *)&v5[2 * v12] = *(_OWORD *)a2;
      *(_QWORD *)&v5[2 * v12 + 4] = *a3;
      return v4;
    }
    v4 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 163;
      goto LABEL_4;
    }
  }
  return v4;
}
