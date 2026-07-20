/*
 * XREFs of sub_1400038D0 @ 0x1400038D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_140002E90 @ 0x140002E90 (sub_140002E90.c)
 *     sub_140003500 @ 0x140003500 (sub_140003500.c)
 *     sub_140003D54 @ 0x140003D54 (sub_140003D54.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_14000449C @ 0x14000449C (sub_14000449C.c)
 *     sub_1400044F0 @ 0x1400044F0 (sub_1400044F0.c)
 *     sub_140004D90 @ 0x140004D90 (sub_140004D90.c)
 *     sub_14000BAD0 @ 0x14000BAD0 (sub_14000BAD0.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     _guard_check_icall_nop @ 0x14000C330 (_guard_check_icall_nop.c)
 *     memset @ 0x14000C48C (memset.c)
 *     sub_14000C4D0 @ 0x14000C4D0 (sub_14000C4D0.c)
 *     sub_140012BFC @ 0x140012BFC (sub_140012BFC.c)
 */

NTSTATUS __fastcall sub_1400038D0(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // r15
  _BYTE *v5; // r14
  int v6; // ebx
  _BYTE *v7; // rdi
  __int64 MessageAttribute; // rax
  __int64 v9; // r8
  _BOOL8 v10; // r9
  __int64 (__fastcall **v11)(); // rdx
  __int64 (__fastcall *v12)(__int64); // rbx
  int v13; // eax
  __int64 (*v14)(); // rbx
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp-1D8h]
  __int64 v19; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE *v20; // [rsp+58h] [rbp-1C0h]
  _DWORD v21[12]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE v22[4]; // [rsp+90h] [rbp-188h] BYREF
  __int16 v23; // [rsp+94h] [rbp-184h]
  int v24; // [rsp+B8h] [rbp-160h]
  int v25; // [rsp+BCh] [rbp-15Ch]

  v3 = 0;
  RtlSetThreadIsCritical(1u, 0LL, 1u);
  v4 = qword_14001FCE0;
  v5 = 0LL;
  memset(v21, 0, 0x28uLL);
  AlpcInitializeMessageAttribute(0x20000000LL, v21, 40LL, &v19);
  do
  {
    v19 = 328LL;
    v21[1] |= 0x20000000u;
    v6 = NtAlpcSendWaitReceivePort(v4, 0x10000LL, 0LL, 0LL, v22, &v19, v21, 0LL, v18);
    LODWORD(v18) = v6;
  }
  while ( v6 < 0 );
  v7 = *(_BYTE **)AlpcGetMessageAttribute(v21, 0x20000000LL);
  MessageAttribute = AlpcGetMessageAttribute(v21, 0x20000000LL);
  v9 = *(unsigned int *)(MessageAttribute + 16);
  HIDWORD(v18) = *(_DWORD *)(MessageAttribute + 16);
  v10 = v23 < 0;
  if ( (unsigned __int8)v23 != 1 )
  {
    if ( (unsigned __int8)v23 != 5 )
    {
      if ( (unsigned __int8)v23 == 10 )
      {
        sub_140003E30(v4, v22, v21, v10);
      }
      else if ( (v23 & 0x2000) != 0 )
      {
        v16 = AlpcGetMessageAttribute(v21, 0x20000000LL);
        NtAlpcCancelMessage(v4, 0LL, v16);
        v5 = v22;
        v20 = v22;
      }
    }
    goto LABEL_7;
  }
  v5 = v22;
  v20 = v22;
  if ( (unsigned int)v24 >= 8 )
  {
    v25 = -1073741822;
    goto LABEL_7;
  }
  v11 = &funcs_140003CDD;
  if ( *((_DWORD *)&funcs_140003CDD + 4 * v24 + 2) )
  {
    v6 = sub_1400044F0(a2, &funcs_140003CDD, v9, v10);
    LODWORD(v18) = v6;
    if ( v6 < 0 )
    {
      v25 = -1073741670;
      goto LABEL_7;
    }
    v3 = 1;
    v11 = &funcs_140003CDD;
  }
  v25 = 259;
  if ( v24 == 3 )
    goto LABEL_28;
  if ( v24 == 5 )
    goto LABEL_17;
  if ( v24 < 0 )
  {
LABEL_32:
    v25 = v6;
    goto LABEL_33;
  }
  if ( v24 <= 2 )
  {
    if ( (*v7 & 0x10) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_31;
    }
    v14 = *(&funcs_140003CDD + 2 * v24);
    if ( v14 == sub_140001010 )
    {
      v15 = sub_140001010();
      goto LABEL_30;
    }
    goto LABEL_56;
  }
  if ( v24 == 4 )
  {
LABEL_28:
    v14 = *(&funcs_140003CDD + 2 * v24);
    if ( (char *)v14 == (char *)sub_140002E90 )
    {
      v15 = sub_140002E90((__int64)v22, (__int64)v7);
LABEL_30:
      v6 = v15;
LABEL_31:
      LODWORD(v18) = v6;
      goto LABEL_32;
    }
LABEL_56:
    v15 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64, _BOOL8))v14)(v22, v7, v4, v10);
    goto LABEL_30;
  }
  if ( v24 > 7 )
    goto LABEL_32;
LABEL_17:
  if ( (*v7 & 6) == 0 )
  {
    v6 = sub_14000BAD0(v22, v7, v9, v10);
    LODWORD(v18) = v6;
  }
  if ( v6 >= 0 )
  {
    if ( (*v7 & 4) != 0 )
    {
      v12 = (__int64 (__fastcall *)(__int64))*(&funcs_140003CDD + 2 * v24);
      if ( v12 == sub_140003500 )
      {
        v13 = sub_140003500((__int64)v22);
      }
      else if ( (char *)v12 == (char *)sub_140004D90 )
      {
        v13 = sub_140004D90(v22, v7, v4);
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(_BYTE *, _BYTE *, __int64, _BOOL8))v12)(v22, v7, v4, v10);
      }
      v6 = v13;
    }
    else
    {
      v6 = -1073741790;
    }
    LODWORD(v18) = v6;
  }
  if ( v6 != 259 || v24 != 5 )
    goto LABEL_32;
  v5 = 0LL;
  v20 = 0LL;
LABEL_33:
  if ( v3 )
    sub_14000449C(a2, v11, v9, v10);
LABEL_7:
  if ( v7 )
    sub_140003D54(v7);
  if ( v5 )
    NtAlpcSendWaitReceivePort(v4, 0x10000LL, v5, 0LL, 0LL, 0LL, 0LL, 0LL, v18);
  return RtlSetThreadIsCritical(0, 0LL, 1u);
}
