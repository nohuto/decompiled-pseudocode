/*
 * XREFs of RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00D6834
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C00BA7F0 (NtUserInjectKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     RIMIDEInjectKeyboardInput @ 0x1C00D6A04 (RIMIDEInjectKeyboardInput.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardFromKeybdInputStruct(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // r11d
  int *v9; // rdx
  _BYTE *v10; // r10
  int v11; // r9d
  unsigned __int64 v12; // r8
  int v13; // r9d
  __int16 v14; // cx
  __int16 v15; // cx
  __int16 v16; // ax
  PVOID Object; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v19[128]; // [rsp+30h] [rbp-C8h] BYREF

  memset(v19, 0, 0x78uLL);
  Object = 0LL;
  v6 = 1;
  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 < 0 )
    return 0;
  v8 = 0;
  if ( a3 )
  {
    v9 = (int *)(a2 + 4);
    v10 = &v19[4];
    while ( 1 )
    {
      v11 = 1;
      if ( (*v9 & 4) != 0 && (*((_WORD *)v9 - 2) || (*v9 & 0xFFFFFFF9) != 0) )
        v11 = 0;
      LODWORD(v12) = v9[1];
      if ( (_DWORD)v12 )
      {
        LODWORD(v12) = v9[1];
        if ( (unsigned int)v12 > (unsigned int)((MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
          v11 = 0;
      }
      if ( *(_QWORD *)(v9 + 3) )
        v11 = 0;
      if ( !v11 )
        break;
      v13 = *v9;
      *((_WORD *)v10 - 2) = -2;
      v14 = 0;
      if ( (v13 & 4) != 0 )
      {
        v14 = 32;
      }
      else if ( *((_WORD *)v9 - 2) && (v13 & 8) == 0 )
      {
        v14 = 64;
      }
      v15 = (2 * (v13 & 1)) | v14;
      *(_WORD *)v10 = v15 | ((v13 & 2) != 0);
      if ( (((unsigned __int8)v15 | ((v13 & 2) != 0)) & 0x40) != 0 )
        v16 = *((_WORD *)v9 - 2);
      else
        v16 = *((_WORD *)v9 - 1);
      *((_WORD *)v10 - 1) = v16;
      *((_WORD *)v10 + 1) = 0;
      if ( !(_DWORD)v12 )
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *((_DWORD *)v10 + 1) = v12;
      ++v8;
      v10 += 12;
      v9 += 6;
      if ( v8 >= a3 )
        goto LABEL_27;
    }
    v7 = -1073741811;
  }
LABEL_27:
  if ( v7 >= 0 )
    v7 = RIMIDEInjectKeyboardInput(a1, v19, a3);
  ObfDereferenceObject(Object);
  if ( v7 < 0 )
    return 0;
  return v6;
}
