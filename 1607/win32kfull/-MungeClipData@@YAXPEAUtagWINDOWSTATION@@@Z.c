/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014F720
 * Callers:
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     InternalSetClipboardData @ 0x1C014F894 (InternalSetClipboardData.c)
 *     _ConvertMemHandle @ 0x1C0150634 (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01E5DB8 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01E670C (HMUnlockDestroyObject.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v18; // edx
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat((__int64)a1, 1LL, 1);
  v3 = FindClipFormat((__int64)a1, 7LL, 1);
  v4 = FindClipFormat((__int64)a1, 13LL, 1);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat((__int64)a1, 16LL, 1) )
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
            LOBYTE(v14) = 6;
            v17 = HMValidateHandleNoRip(v13, v14, v15, v16);
            if ( v17 )
              HMUnlockDestroyObject(v17);
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
  if ( !FindClipFormat((__int64)a1, 3LL, 1) )
  {
    v6 = FindClipFormat((__int64)a1, 14LL, 1);
    if ( v6 )
    {
      v18 = 3;
LABEL_29:
      InternalSetClipboardData((_DWORD)a1, v18, (*(_QWORD *)(v6 + 8) != 0LL) + 3, 0, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat((__int64)a1, 14LL, 1) )
  {
    v6 = FindClipFormat((__int64)a1, 3LL, 1);
    if ( v6 )
    {
      v18 = 14;
      goto LABEL_29;
    }
  }
LABEL_8:
  v7 = FindClipFormat((__int64)a1, 2LL, 1);
  v8 = FindClipFormat((__int64)a1, 8LL, 1);
  v9 = FindClipFormat((__int64)a1, 17LL, 1);
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
  if ( (*(_DWORD *)(gpsi + 8684LL) & 1) != 0 && !FindClipFormat((__int64)a1, 9LL, 1) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData((_DWORD)a1, 9, 2, 0, 1);
    else
      PasteScreenPalette(a1);
  }
}
