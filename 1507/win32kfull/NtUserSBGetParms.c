/*
 * XREFs of NtUserSBGetParms @ 0x1C00D7730
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, int a2, __int128 *a3, __int128 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r11
  unsigned int v11; // ebx
  __int128 v12; // xmm2
  __int64 v13; // r9
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-58h]
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int128 v18; // [rsp+58h] [rbp-30h]

  EnterSharedCrit(1LL);
  v10 = ValidateHwnd(a1);
  v11 = 0;
  if ( v10 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    *a4 = *a4;
    *((_QWORD *)a4 + 2) = *((_QWORD *)a4 + 2);
    *((_DWORD *)a4 + 6) = *((_DWORD *)a4 + 6);
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = *a3;
    v12 = *a4;
    v16 = *a4;
    v17 = *((_QWORD *)a4 + 2);
    v8 = *((unsigned int *)a4 + 6);
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 640LL);
    v14 = HIDWORD(*(_QWORD *)a4);
    if ( (*(_QWORD *)a4 & 0x100000000LL) != 0 )
    {
      *((_QWORD *)&v16 + 1) = *(_QWORD *)a3;
      v12 = v16;
    }
    v9 = (unsigned int)v17;
    if ( (v14 & 2) != 0 )
      v9 = DWORD2(v18);
    LODWORD(v17) = v9;
    if ( (v14 & 4) != 0 )
      HIDWORD(v17) = HIDWORD(*a3);
    if ( (v14 & 0x10) != 0 )
    {
      if ( v13 && *(_DWORD *)(v13 + 88) == a2 && *(_QWORD *)(v13 + 8) == v10 )
        v8 = *(unsigned int *)(v13 + 84);
      else
        v8 = HIDWORD(*((_QWORD *)&v18 + 1));
    }
    LOBYTE(v11) = (v14 & 0x17) != 0;
    *a4 = v12;
    *((_QWORD *)a4 + 2) = v17;
    *((_DWORD *)a4 + 6) = v8;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v11;
}
