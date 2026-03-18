/*
 * XREFs of NtUserSetCursorIconData @ 0x1C009FC70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01BF2EC (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserSetCursorIconData(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _BYTE *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // r8d
  unsigned __int64 v14; // r11
  int v15; // r9d
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r8
  _BYTE *v20; // r9
  unsigned int v21; // ecx
  unsigned __int64 v22; // r8
  EnterLeaveCrit *v23; // rcx
  size_t Size; // [rsp+20h] [rbp-E8h]
  int v26; // [rsp+34h] [rbp-D4h]
  int v27; // [rsp+38h] [rbp-D0h]
  char v28[8]; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h]
  __int128 v33; // [rsp+70h] [rbp-98h] BYREF
  __int128 v34; // [rsp+80h] [rbp-88h]
  __int128 v35; // [rsp+90h] [rbp-78h]
  __int128 v36; // [rsp+A0h] [rbp-68h]
  __int128 v37; // [rsp+B0h] [rbp-58h]
  __int128 v38; // [rsp+C0h] [rbp-48h]
  __int128 v39; // [rsp+D0h] [rbp-38h]
  __int128 v40; // [rsp+E0h] [rbp-28h]
  __int64 v41; // [rsp+F0h] [rbp-18h]

  v8 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v28);
  LOBYTE(v9) = 3;
  v12 = HMValidateHandle(a1, v9, v10, v11);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 80) & 0x800) == 0 )
    {
      UserSetLastError(0LL);
      goto LABEL_41;
    }
    if ( a2 >= W32UserProbeAddress )
      a2 = W32UserProbeAddress;
    v13 = *(_DWORD *)a2;
    v26 = *(_DWORD *)a2;
    v31 = *(_DWORD *)a2;
    v14 = *(_QWORD *)(a2 + 8);
    v32 = v14;
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    v15 = *(_DWORD *)a3;
    v27 = *(_DWORD *)a3;
    v29 = *(_DWORD *)a3;
    v16 = *(_QWORD *)(a3 + 8);
    v30 = v16;
    if ( (v14 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (unsigned __int16)v13 + v14 + 2;
    v18 = (unsigned __int64 *)W32UserProbeAddress;
    if ( v17 >= W32UserProbeAddress || (unsigned __int16)v13 > HIWORD(v26) || (v13 & 1) != 0 || v17 <= v14 )
    {
      *W32UserProbeAddress = 0;
      v18 = (unsigned __int64 *)W32UserProbeAddress;
    }
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (unsigned __int16)v15 + v16 + 2;
      if ( v19 >= *v18 || (unsigned __int16)v15 > HIWORD(v27) || (v15 & 1) != 0 || v19 <= v16 )
      {
        *(_BYTE *)*v18 = 0;
        v18 = (unsigned __int64 *)W32UserProbeAddress;
      }
    }
    v20 = (_BYTE *)*v18;
    if ( (unsigned __int64)a4 >= *v18 )
      a4 = (_BYTE *)*v18;
    v33 = *(_OWORD *)a4;
    v34 = *((_OWORD *)a4 + 1);
    v35 = *((_OWORD *)a4 + 2);
    v36 = *((_OWORD *)a4 + 3);
    v37 = *((_OWORD *)a4 + 4);
    v38 = *((_OWORD *)a4 + 5);
    v39 = *((_OWORD *)a4 + 6);
    v40 = *((_OWORD *)a4 + 7);
    v41 = *((_QWORD *)a4 + 16);
    if ( (DWORD2(v34) & 0xFFFFEFB0) != 0 )
    {
      UserSetLastError(1004LL);
      goto LABEL_41;
    }
    if ( (BYTE8(v34) & 8) != 0 )
    {
      if ( WORD3(v39) | WORD1(v39)
        || *((_QWORD *)&v40 + 1) != 8LL * (int)v39
        || (_QWORD)v40 != *((_QWORD *)&v40 + 1) + 4LL * SDWORD1(v39) )
      {
        goto LABEL_41;
      }
      v21 = 8 * (v39 + DWORD1(v39));
    }
    else
    {
      v21 = 0;
    }
    if ( v21 )
    {
      if ( (BYTE8(v39) & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *((_QWORD *)&v39 + 1) + v21;
      if ( v22 > (unsigned __int64)v20 || v22 < *((_QWORD *)&v39 + 1) )
        *v20 = 0;
    }
    LODWORD(Size) = v21;
    v8 = SetCursorIconData(v12, (int)&v31, (int)&v29, (int)&v33, Size);
  }
LABEL_41:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v28);
  EnterLeaveCrit::~EnterLeaveCrit(v23);
  return v8;
}
