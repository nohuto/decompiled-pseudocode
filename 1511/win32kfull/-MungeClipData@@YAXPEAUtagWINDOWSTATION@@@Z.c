/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038
 * Callers:
 *     xxxCloseClipboard @ 0x1C00DBC30 (xxxCloseClipboard.c)
 *     xxxDisownClipboard @ 0x1C01F0B0C (xxxDisownClipboard.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00DBF5C (FindClipFormat.c)
 *     InternalSetClipboardData @ 0x1C014A1AC (InternalSetClipboardData.c)
 *     _ConvertMemHandle @ 0x1C014B114 (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F0078 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01F09CC (HMUnlockDestroyObject.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  __int64 ClipFormat; // r14
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat((__int64)a1, 1u, 1);
  v3 = FindClipFormat((__int64)a1, 7u, 1);
  v4 = FindClipFormat((__int64)a1, 0xDu, 1);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat((__int64)a1, 0x10u, 1) )
    {
      v11 = *(_QWORD *)(gptiCurrent + 392LL);
      if ( v11 )
      {
        Src = *(unsigned __int16 *)(v11 + 40);
        v12 = ConvertMemHandle(&Src, 4uLL);
        v13 = v12;
        if ( v12 )
        {
          if ( !(unsigned int)InternalSetClipboardData((_DWORD)a1, 16, v12, 0, 1) )
          {
            v14 = HMValidateHandleNoRip(v13, 6);
            if ( v14 )
              HMUnlockDestroyObject(v14);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData((_DWORD)a1, 1, 1, 0, 1);
    if ( !v3 )
      InternalSetClipboardData((_DWORD)a1, 7, 1, 0, 1);
    if ( !v5 )
      InternalSetClipboardData((_DWORD)a1, 13, 1, 0, 1);
  }
  if ( !FindClipFormat((__int64)a1, 3u, 1) )
  {
    v6 = FindClipFormat((__int64)a1, 0xEu, 1);
    if ( v6 )
    {
      v15 = 3;
LABEL_29:
      InternalSetClipboardData((_DWORD)a1, v15, (*(_QWORD *)(v6 + 8) != 0LL) + 3, 0, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat((__int64)a1, 0xEu, 1) )
  {
    v6 = FindClipFormat((__int64)a1, 3u, 1);
    if ( v6 )
    {
      v15 = 14;
      goto LABEL_29;
    }
  }
LABEL_8:
  v7 = FindClipFormat((__int64)a1, 2u, 1);
  v8 = FindClipFormat((__int64)a1, 8u, 1);
  v9 = FindClipFormat((__int64)a1, 0x11u, 1);
  v10 = v9;
  if ( !v7 )
  {
    if ( !v8 && !v9 )
      return;
    InternalSetClipboardData((_DWORD)a1, 2, 2, 0, 1);
  }
  if ( !v8 )
    InternalSetClipboardData((_DWORD)a1, 8, 2, 0, 1);
  if ( !v10 )
    InternalSetClipboardData((_DWORD)a1, 17, 2, 0, 1);
  if ( (*(_DWORD *)(gpsi + 7292LL) & 1) != 0 && !FindClipFormat((__int64)a1, 9u, 1) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData((_DWORD)a1, 9, 2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
