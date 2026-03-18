/*
 * XREFs of NtUserSetCursorIconData @ 0x1C011B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _SetCursorIconData @ 0x1C011BB5C (_SetCursorIconData.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01C2D74 (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // r9d
  unsigned __int64 v11; // r10
  int v12; // r11d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // r8
  _BYTE *v17; // r9
  unsigned int v18; // ecx
  unsigned __int64 v19; // r8
  EnterLeaveCrit *v20; // rcx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v23; // [rsp+34h] [rbp-D4h]
  int v24; // [rsp+38h] [rbp-D0h]
  char v25[8]; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B8h]
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-A8h]
  __int128 v30; // [rsp+70h] [rbp-98h] BYREF
  __int128 v31; // [rsp+80h] [rbp-88h]
  __int128 v32; // [rsp+90h] [rbp-78h]
  __int128 v33; // [rsp+A0h] [rbp-68h]
  __int128 v34; // [rsp+B0h] [rbp-58h]
  __int128 v35; // [rsp+C0h] [rbp-48h]
  __int128 v36; // [rsp+D0h] [rbp-38h]
  __int128 v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+F0h] [rbp-18h]

  v8 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v25);
  v9 = HMValidateHandle(a1, 3);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 80) & 0x800) == 0 )
    {
      UserSetLastError(0);
      goto LABEL_39;
    }
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    v10 = *(_DWORD *)a2;
    v23 = *(_DWORD *)a2;
    v28 = *(_DWORD *)a2;
    v11 = *(_QWORD *)(a2 + 8);
    v29 = v11;
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    v12 = *(_DWORD *)a3;
    v24 = *(_DWORD *)a3;
    v26 = *(_DWORD *)a3;
    v13 = *(_QWORD *)(a3 + 8);
    v27 = v13;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = (unsigned __int16)v10 + v11 + 2;
    v15 = (unsigned __int64 *)W32UserProbeAddress;
    if ( v14 >= W32UserProbeAddress || (unsigned __int16)v10 > HIWORD(v23) || v14 <= v11 )
    {
      *W32UserProbeAddress = 0;
      v15 = (unsigned __int64 *)W32UserProbeAddress;
    }
    if ( (v13 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = (unsigned __int16)v12 + v13 + 2;
      if ( v16 >= *v15 || (unsigned __int16)v12 > HIWORD(v24) || v16 <= v13 )
      {
        *(_BYTE *)*v15 = 0;
        v15 = (unsigned __int64 *)W32UserProbeAddress;
      }
    }
    v17 = (_BYTE *)*v15;
    if ( (unsigned __int64)a4 >= *v15 )
      a4 = (_BYTE *)*v15;
    v30 = *(_OWORD *)a4;
    v31 = *((_OWORD *)a4 + 1);
    v32 = *((_OWORD *)a4 + 2);
    v33 = *((_OWORD *)a4 + 3);
    v34 = *((_OWORD *)a4 + 4);
    v35 = *((_OWORD *)a4 + 5);
    v36 = *((_OWORD *)a4 + 6);
    v37 = *((_OWORD *)a4 + 7);
    v38 = *((_QWORD *)a4 + 16);
    if ( (DWORD2(v31) & 0xFFFFEFB0) != 0 )
    {
      UserSetLastError(1004);
      goto LABEL_39;
    }
    if ( (BYTE8(v31) & 8) != 0 )
    {
      if ( WORD3(v36) | WORD1(v36)
        || *((_QWORD *)&v37 + 1) != 8LL * (int)v36
        || (_QWORD)v37 != *((_QWORD *)&v37 + 1) + 4LL * SDWORD1(v36) )
      {
        goto LABEL_39;
      }
      v18 = 8 * (v36 + DWORD1(v36));
    }
    else
    {
      v18 = 0;
    }
    if ( v18 )
    {
      if ( (BYTE8(v36) & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *((_QWORD *)&v36 + 1) + v18;
      if ( v19 > (unsigned __int64)v17 || v19 < *((_QWORD *)&v36 + 1) )
        *v17 = 0;
    }
    LODWORD(Size) = v18;
    v8 = SetCursorIconData(v9, (int)&v28, (int)&v26, (int)&v30, Size);
  }
LABEL_39:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v25);
  EnterLeaveCrit::~EnterLeaveCrit(v20);
  return v8;
}
