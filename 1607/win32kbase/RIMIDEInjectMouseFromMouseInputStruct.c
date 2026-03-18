/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00D6AF8
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00BAAC0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C00D4FE8 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C00D5084 (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00D6D2C (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C00D73DC (RIMIDEValidateMouseInputStruct.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(void *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v4; // r12
  void *v5; // rsi
  unsigned int v6; // r15d
  int v7; // r14d
  PVOID v8; // rbx
  char *v9; // r13
  unsigned int v10; // ebp
  char *v11; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // xmm1_8
  __int64 v14; // r11
  int v15; // r12d
  __int16 v16; // ax
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rdx
  __int16 v20; // ax
  unsigned __int64 v21; // rcx
  PVOID Object; // [rsp+28h] [rbp-160h] BYREF
  void *v25; // [rsp+30h] [rbp-158h]
  __int64 v26; // [rsp+40h] [rbp-148h]
  _OWORD v27[15]; // [rsp+50h] [rbp-138h] BYREF

  v3 = a3;
  v4 = a2;
  v26 = a2;
  v5 = a1;
  v25 = a1;
  memset(v27, 0, sizeof(v27));
  Object = 0LL;
  v6 = 1;
  v7 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  if ( v7 < 0 )
    return 0;
  v8 = Object;
  v9 = (char *)Object + 64;
  if ( !Object )
    v9 = 0LL;
  if ( (*((_DWORD *)v9 + 46) & 0x80u) == 0 )
  {
    v10 = 0;
    if ( v3 )
    {
      v11 = (char *)v27 + 2;
      v12 = (_DWORD *)(v4 + 12);
      while ( 1 )
      {
        if ( v10 )
        {
          v13 = *((_QWORD *)v27 + 3 * v10 - 1);
          *(_OWORD *)(v9 + 716) = *(_OWORD *)((char *)&v27[-1] + 24 * v10 - 8);
          *(_QWORD *)(v9 + 732) = v13;
        }
        if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v4 + 32LL * v10, 0LL) )
          break;
        v15 = *v12;
        *((_WORD *)v11 - 1) = -2;
        v16 = (v15 & 0x8000) != 0;
        if ( (v15 & 0x2000) != 0 )
          v16 |= 8u;
        if ( (v15 & 0x4000) != 0 )
          v16 |= 2u;
        v17 = *((_DWORD *)v9 + 181);
        *(_WORD *)v11 = v16;
        v18 = RIMIDEBuildRawButtonsFromMouseInputStruct(v17, v14);
        *(_DWORD *)(v11 + 6) = v18;
        *((_WORD *)v11 + 1) = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v17, v18, v19);
        v20 = 0;
        if ( (v15 & 0x1800) != 0 )
          v20 = *((_WORD *)v12 - 2);
        LODWORD(v21) = v12[1];
        *((_WORD *)v11 + 2) = v20;
        *(_DWORD *)(v11 + 10) = *(v12 - 3);
        *(_DWORD *)(v11 + 14) = *(v12 - 2);
        if ( !(_DWORD)v21 )
          v21 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v4 = v26;
        ++v10;
        *(_DWORD *)(v11 + 18) = v21;
        v12 += 8;
        v11 += 24;
        if ( v10 >= a3 )
          goto LABEL_22;
      }
      v7 = -1073741811;
LABEL_22:
      v5 = v25;
      v3 = a3;
      v8 = Object;
    }
    if ( v7 >= 0 )
      v7 = RIMIDEInjectMouseInput(v5, v27, v3);
  }
  else
  {
    UserSetLastError(21LL);
    v7 = -2147483631;
  }
  ObfDereferenceObject(v8);
  if ( v7 < 0 )
    return 0;
  return v6;
}
