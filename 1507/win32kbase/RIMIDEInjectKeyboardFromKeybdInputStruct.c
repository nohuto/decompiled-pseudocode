/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00C6248
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00766E0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00C6438 (RIMIDEInjectKeyboardInput.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // r11d
  int *v9; // rdx
  _WORD *v10; // r10
  int v11; // eax
  BOOL v12; // r8d
  unsigned __int64 v13; // r9
  int v14; // r8d
  __int16 v15; // cx
  __int16 v16; // cx
  __int16 v17; // ax
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  _WORD v20[64]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v20, 0, 120);
  v6 = 1;
  Object = 0LL;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 < 0 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    v9 = (int *)(a2 + 4);
    v10 = &v20[2];
    while ( 1 )
    {
      v11 = *v9;
      v12 = 1;
      if ( (*v9 & 4) != 0 )
      {
        if ( *((_WORD *)v9 - 2) || (v11 & 0xFFFFFFF9) != 0 )
          v12 = 0;
      }
      else if ( (v11 & 8) == 0 )
      {
        v12 = (unsigned __int16)(*((_WORD *)v9 - 2) - 1) <= 0xFDu;
      }
      LODWORD(v13) = v9[1];
      if ( (_DWORD)v13 )
      {
        LODWORD(v13) = v9[1];
        if ( (unsigned int)v13 > (unsigned int)((MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
          v12 = 0;
      }
      if ( *(_QWORD *)(v9 + 3) )
        v12 = 0;
      if ( !v12 )
        break;
      v14 = *v9;
      *(v10 - 2) = -2;
      v15 = 0;
      if ( (v14 & 4) != 0 )
      {
        v15 = 32;
      }
      else if ( *((_WORD *)v9 - 2) && (v14 & 8) == 0 )
      {
        v15 = 64;
      }
      v16 = (2 * (v14 & 1)) | v15;
      *v10 = v16 | ((v14 & 2) != 0);
      if ( (((unsigned __int8)v16 | ((v14 & 2) != 0)) & 0x40) != 0 )
        v17 = *((_WORD *)v9 - 2);
      else
        v17 = *((_WORD *)v9 - 1);
      *(v10 - 1) = v17;
      v10[1] = 0;
      if ( !(_DWORD)v13 )
        v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v10 + 1) = v13;
      ++v8;
      v10 += 6;
      v9 += 6;
      if ( v8 >= a3 )
        goto LABEL_29;
    }
    v7 = -1073741811;
  }
LABEL_29:
  if ( v7 >= 0 )
    v7 = RIMIDEInjectKeyboardInput(a1, v20, a3);
  ObfDereferenceObject(Object);
  if ( v7 < 0 )
    return 0;
  return v6;
}
