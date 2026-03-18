/*
 * XREFs of RIMIDEInjectMouseFromMouseInputStruct @ 0x1C00C7400
 * Callers:
 *     NtUserInjectMouseInput @ 0x1C00B0D90 (NtUserInjectMouseInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct @ 0x1C00C5AF0 (RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct.c)
 *     RIMIDEBuildRawButtonsFromMouseInputStruct @ 0x1C00C5B8C (RIMIDEBuildRawButtonsFromMouseInputStruct.c)
 *     RIMIDEInjectMouseInput @ 0x1C00C762C (RIMIDEInjectMouseInput.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C00C7CB8 (RIMIDEValidateMouseInputStruct.c)
 */

__int64 __fastcall RIMIDEInjectMouseFromMouseInputStruct(void *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  void *v5; // rsi
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rdx
  PVOID v10; // rdi
  int v11; // ebx
  char *v12; // r15
  _WORD *v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // xmm1_8
  int v16; // r12d
  __int16 v17; // ax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  PVOID Object; // [rsp+20h] [rbp-158h] BYREF
  void *v27; // [rsp+28h] [rbp-150h]
  __int64 v28; // [rsp+30h] [rbp-148h]
  __int64 v29; // [rsp+38h] [rbp-140h]
  __int16 v30; // [rsp+40h] [rbp-138h] BYREF
  _WORD v31[119]; // [rsp+42h] [rbp-136h] BYREF

  v29 = a2;
  v4 = a2;
  v27 = a1;
  v5 = a1;
  v6 = 0;
  v30 = 0;
  memset(v31, 0, sizeof(v31));
  v7 = 1;
  Object = 0LL;
  v8 = RawInputManagerDeviceObjectResolveHandle(v5, 3u, 1, &Object);
  v10 = Object;
  v11 = v8;
  v12 = (char *)Object + 64;
  if ( !Object )
    v12 = 0LL;
  if ( v8 < 0 )
    return 0;
  if ( (*((_DWORD *)v12 + 44) & 0x80u) != 0 )
  {
    UserSetLastError(21LL, v9);
    v11 = -2147483631;
  }
  if ( v11 < 0 )
    return 0;
  if ( a3 )
  {
    v13 = v31;
    v14 = (_DWORD *)(v4 + 12);
    while ( 1 )
    {
      if ( v6 )
      {
        v15 = *(_QWORD *)&v31[12 * v6 - 5];
        *(_OWORD *)(v12 + 652) = *(_OWORD *)(&v30 + 12 * v6 - 12);
        *(_QWORD *)(v12 + 668) = v15;
      }
      v28 = v4 + 32LL * v6;
      if ( !(unsigned int)RIMIDEValidateMouseInputStruct(v28) )
        break;
      v16 = *v14;
      *(v13 - 1) = -2;
      v17 = (v16 & 0x8000) != 0;
      if ( (v16 & 0x2000) != 0 )
        v17 |= 8u;
      if ( (v16 & 0x4000) != 0 )
        v17 |= 2u;
      v18 = v28;
      v19 = *((_DWORD *)v12 + 165);
      *v13 = v17;
      v20 = RIMIDEBuildRawButtonsFromMouseInputStruct(v19, v18);
      *(_DWORD *)(v13 + 3) = v20;
      v13[1] = RIMIDEBuildButtonFlagsFromRawButtonsAndMouseInputStruct(v22, v20, v21);
      v23 = 0;
      if ( (v16 & 0x1800) != 0 )
        v23 = *((_WORD *)v14 - 2);
      LODWORD(v24) = v14[1];
      v13[2] = v23;
      *(_DWORD *)(v13 + 5) = *(v14 - 3);
      *(_DWORD *)(v13 + 7) = *(v14 - 2);
      if ( !(_DWORD)v24 )
        v24 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v4 = v29;
      ++v6;
      *(_DWORD *)(v13 + 9) = v24;
      v14 += 8;
      v13 += 12;
      if ( v6 >= a3 )
        goto LABEL_23;
    }
    v11 = -1073741811;
LABEL_23:
    v5 = v27;
    v10 = Object;
  }
  if ( v11 >= 0 )
    v11 = RIMIDEInjectMouseInput(v5, &v30, a3);
  ObfDereferenceObject(v10);
  if ( v11 < 0 )
    return 0;
  return v7;
}
