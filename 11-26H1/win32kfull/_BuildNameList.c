/*
 * XREFs of _BuildNameList @ 0x140259840
 * Callers:
 *     NtUserBuildNameList @ 0x140264610 (NtUserBuildNameList.c)
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??$WriteMember@KUtagNAMELIST@@U1@@?$UserModePointer@UtagNAMELIST@@@@QEAAXPEQtagNAMELIST@@KAEBK@Z @ 0x140288CC0 (--$WriteMember@KUtagNAMELIST@@U1@@-$UserModePointer@UtagNAMELIST@@@@QEAAXPEQtagNAMELIST@@KAEBK@Z.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 *     RtlWriteUShortToUser @ 0x1403E23B0 (RtlWriteUShortToUser.c)
 */

__int64 __fastcall BuildNameList(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // r14
  unsigned int v13; // r13d
  PGENERIC_MAPPING v14; // rcx
  __int64 v15; // r15
  char v16; // dl
  __int64 v17; // r8
  int v18; // eax
  __int64 NameInfo; // rax
  __int64 v20; // r13
  int v21; // eax
  size_t v22; // r8
  char v24; // [rsp+20h] [rbp-88h]
  int v25; // [rsp+24h] [rbp-84h]
  PGENERIC_MAPPING v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  __int64 v28; // [rsp+50h] [rbp-58h]
  char *v29; // [rsp+58h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp+10h] BYREF
  _DWORD *v31; // [rsp+C8h] [rbp+20h]

  v31 = a4;
  v30 = a2;
  v4 = a3;
  v24 = 1;
  RtlWriteULongToUser(a2 + 4, 0LL);
  v9 = (char *)(a2 + 8);
  v27 = a2 + 8;
  v10 = a2 + v4 - 2;
  v11 = 0;
  if ( a1 )
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = 64;
    v25 = 64;
    v26 = DesktopMapping;
    v15 = 32LL;
    v21 = IsCurrentProcessDwm(v8);
    v14 = DesktopMapping;
    if ( v21 )
    {
      v16 = 0;
      v24 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v12 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63512);
    v13 = 256;
    v25 = 256;
    v14 = (PGENERIC_MAPPING)WinStaMapping;
    v26 = (PGENERIC_MAPPING)WinStaMapping;
    v15 = 8LL;
  }
  v16 = 1;
LABEL_4:
  v17 = 0LL;
  *v31 = 0;
  while ( v12 )
  {
    LOBYTE(v17) = v16;
    v18 = AccessCheckObject(v12, v13, v17, v14);
    v17 = 0LL;
    if ( v18 )
    {
      NameInfo = ObQueryNameInfo(v12);
      v20 = NameInfo;
      v17 = 0LL;
      if ( NameInfo )
      {
        if ( (unsigned __int64)&v9[*(unsigned __int16 *)(NameInfo + 8) + 2] >= v10 )
        {
          *v31 += (_DWORD)v9 - a2;
          v9 = (char *)(a2 + 8);
          v28 = a2 + 8;
          v11 = -1073741789;
        }
        LODWORD(v27) = RtlReadULongFromUser(a2 + 4) + 1;
        UserModePointer<tagNAMELIST>::WriteMember<unsigned long,tagNAMELIST,tagNAMELIST>(&v30, 4LL, &v27);
        v22 = *(unsigned __int16 *)(v20 + 8);
        if ( (unsigned __int64)&v9[v22 + 2] <= v10 )
        {
          RtlCopyToUser(v9, *(void **)(v20 + 16), v22);
          v29 = &v9[*(unsigned __int16 *)(v20 + 8)];
          v9 = v29 + 2;
          RtlWriteUShortToUser(v29, 0LL);
        }
        v17 = 0LL;
        v13 = v25;
      }
      else
      {
        v13 = v25;
      }
    }
    v12 = *(_QWORD *)(v15 + v12);
    v14 = v26;
    v16 = v24;
  }
  v29 = v9;
  RtlWriteUShortToUser(v9, 0LL);
  v28 = a2;
  RtlWriteULongToUser(a2, &v9[-a2 + 2]);
  *v31 += (_DWORD)v9 + 2 - a2;
  return v11;
}
