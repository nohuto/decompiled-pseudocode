/*
 * XREFs of NtUserSetCursorIconData @ 0x1C00923B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _SetCursorIconData @ 0x1C0091DB4 (_SetCursorIconData.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     LeaveEditionCrit @ 0x1C01573F0 (LeaveEditionCrit.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, unsigned __int64 a2, int *a3, _BYTE *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // r8d
  unsigned __int64 v12; // r11
  int v13; // r9d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // r8
  _BYTE *v18; // r9
  unsigned int v19; // ecx
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v25; // [rsp+34h] [rbp-D4h]
  int v26; // [rsp+38h] [rbp-D0h]
  char v27[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-A8h]
  __int128 v31; // [rsp+70h] [rbp-98h] BYREF
  __int128 v32; // [rsp+80h] [rbp-88h]
  __int128 v33; // [rsp+90h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-68h]
  __int128 v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+C0h] [rbp-48h]
  __int128 v37; // [rsp+D0h] [rbp-38h]
  __int128 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+F0h] [rbp-18h]

  v8 = 0;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  LOBYTE(v9) = 3;
  v10 = HMValidateHandle(a1, v9);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 80) & 0x800) == 0 )
    {
      UserSetLastError(0);
      goto LABEL_41;
    }
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    v11 = *(_DWORD *)a2;
    v25 = *(_DWORD *)a2;
    v29 = *(_DWORD *)a2;
    v12 = *(_QWORD *)(a2 + 8);
    v30 = v12;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (int *)W32UserProbeAddress;
    v13 = *a3;
    v26 = *a3;
    LODWORD(v28) = *a3;
    v14 = *((_QWORD *)a3 + 1);
    *((_QWORD *)&v28 + 1) = v14;
    if ( (v12 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (unsigned __int16)v11 + v12 + 2;
    v16 = (unsigned __int64 *)W32UserProbeAddress;
    if ( v15 >= W32UserProbeAddress || (unsigned __int16)v11 > HIWORD(v25) || (v11 & 1) != 0 || v15 <= v12 )
    {
      *W32UserProbeAddress = 0;
      v16 = (unsigned __int64 *)W32UserProbeAddress;
    }
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v14 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int16)v13 + v14 + 2;
      if ( v17 >= *v16 || (unsigned __int16)v13 > HIWORD(v26) || (v13 & 1) != 0 || v17 <= v14 )
      {
        *(_BYTE *)*v16 = 0;
        v16 = (unsigned __int64 *)W32UserProbeAddress;
      }
    }
    v18 = (_BYTE *)*v16;
    if ( (unsigned __int64)a4 >= *v16 )
      a4 = (_BYTE *)*v16;
    v31 = *(_OWORD *)a4;
    v32 = *((_OWORD *)a4 + 1);
    v33 = *((_OWORD *)a4 + 2);
    v34 = *((_OWORD *)a4 + 3);
    v35 = *((_OWORD *)a4 + 4);
    v36 = *((_OWORD *)a4 + 5);
    v37 = *((_OWORD *)a4 + 6);
    v38 = *((_OWORD *)a4 + 7);
    v39 = *((_QWORD *)a4 + 16);
    if ( (DWORD2(v32) & 0xFFFFEFB0) != 0 )
    {
      UserSetLastError(1004);
      goto LABEL_41;
    }
    if ( (BYTE8(v32) & 8) != 0 )
    {
      if ( WORD3(v37) | WORD1(v37)
        || *((_QWORD *)&v38 + 1) != 8LL * (int)v37
        || (_QWORD)v38 != *((_QWORD *)&v38 + 1) + 4LL * SDWORD1(v37) )
      {
        goto LABEL_41;
      }
      v19 = 8 * (v37 + DWORD1(v37));
    }
    else
    {
      v19 = 0;
    }
    if ( v19 )
    {
      if ( (BYTE8(v37) & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = *((_QWORD *)&v37 + 1) + v19;
      if ( v20 > (unsigned __int64)v18 || v20 < *((_QWORD *)&v37 + 1) )
        *v18 = 0;
    }
    LODWORD(Size) = v19;
    v8 = SetCursorIconData(v10, (__int64)&v29, &v28, (__int64)&v31, Size);
  }
LABEL_41:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  LeaveEditionCrit(v22, v21);
  return v8;
}
