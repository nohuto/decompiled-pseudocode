/*
 * XREFs of InitializeClientPfnArrays @ 0x1C010CDE8
 * Callers:
 *     NtUserInitializeClientPfnArrays @ 0x1C010CD00 (NtUserInitializeClientPfnArrays.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeClientPfnArrays(__int128 *a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  __int128 v11; // xmm1
  _OWORD *v12; // rdi

  if ( dword_1C03238A8 || !a1 )
    return 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    v8 = *a1;
    qword_1C0322180 = 4LL;
    *(_OWORD *)(gpsi + 392LL) = v8;
    *(_OWORD *)(gpsi + 408LL) = a1[1];
    *(_OWORD *)(gpsi + 424LL) = a1[2];
    *(_OWORD *)(gpsi + 440LL) = a1[3];
    *(_OWORD *)(gpsi + 456LL) = a1[4];
    *(_OWORD *)(gpsi + 472LL) = a1[5];
    *(_OWORD *)(gpsi + 488LL) = a1[6];
    v9 = a1[7];
    v10 = a1 + 8;
    *(_OWORD *)(gpsi + 504LL) = v9;
    *(_OWORD *)(gpsi + 520LL) = *v10;
    *(_OWORD *)(gpsi + 536LL) = v10[1];
    *(_OWORD *)(gpsi + 552LL) = v10[2];
    *(_QWORD *)(gpsi + 568LL) = *((_QWORD *)v10 + 6);
    *(_OWORD *)(gpsi + 576LL) = *a2;
    *(_OWORD *)(gpsi + 592LL) = a2[1];
    *(_OWORD *)(gpsi + 608LL) = a2[2];
    *(_OWORD *)(gpsi + 624LL) = a2[3];
    *(_OWORD *)(gpsi + 640LL) = a2[4];
    *(_OWORD *)(gpsi + 656LL) = a2[5];
    *(_OWORD *)(gpsi + 672LL) = a2[6];
    v11 = a2[7];
    v12 = a2 + 8;
    *(_OWORD *)(gpsi + 688LL) = v11;
    *(_OWORD *)(gpsi + 704LL) = *v12;
    *(_OWORD *)(gpsi + 720LL) = v12[1];
    *(_OWORD *)(gpsi + 736LL) = v12[2];
    *(_QWORD *)(gpsi + 752LL) = *((_QWORD *)v12 + 6);
    *(_OWORD *)(gpsi + 760LL) = *(_OWORD *)a3;
    *(_OWORD *)(gpsi + 776LL) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(gpsi + 792LL) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(gpsi + 808LL) = *(_OWORD *)(a3 + 48);
    *(_OWORD *)(gpsi + 824LL) = *(_OWORD *)(a3 + 64);
    *(_QWORD *)(gpsi + 840LL) = *(_QWORD *)(a3 + 80);
    gpfnwp = *(_QWORD *)(gpsi + 632LL);
    qword_1C0322168 = *(_QWORD *)(gpsi + 608LL);
    qword_1C0322170 = *(_QWORD *)(gpsi + 688LL);
    qword_1C0322178 = *(_QWORD *)(gpsi + 672LL);
    qword_1C0322188 = *(_QWORD *)(gpsi + 640LL);
    qword_1C03221F0 = *(_QWORD *)(gpsi + 656LL);
    qword_1C0322208 = *(_QWORD *)(gpsi + 584LL);
    qword_1C0322190 = *(_QWORD *)(gpsi + 680LL);
    qword_1C0322198 = *(_QWORD *)(gpsi + 648LL);
    qword_1C03221E8 = 1LL;
    qword_1C03221F8 = 3LL;
    qword_1C0322200 = 2LL;
    qword_1C0322210 = 5LL;
    hModClient = a4;
    dword_1C03238A8 = 1;
    return 0LL;
  }
  return 3221225506LL;
}
