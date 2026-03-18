/*
 * XREFs of IcGetInputState @ 0x1C0022750
 * Callers:
 *     IrqLibpGetVectorInput @ 0x1C0022690 (IrqLibpGetVectorInput.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IcGetInputState(unsigned int a1, _OWORD *a2)
{
  __int64 i; // r8
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD *v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 && a1 >= *(_DWORD *)(i + 16) && a1 <= *(_DWORD *)(i + 20) )
    {
      v3 = (_OWORD *)(i + 200LL * (a1 - *(_DWORD *)(i + 16)) + 32);
      v4 = v3[1];
      *a2 = *v3;
      v5 = v3[2];
      a2[1] = v4;
      v6 = v3[3];
      a2[2] = v5;
      v7 = v3[4];
      a2[3] = v6;
      v8 = v3[5];
      a2[4] = v7;
      v9 = v3[6];
      a2[5] = v8;
      a2[6] = v9;
      v10 = a2 + 8;
      v11 = v3[7];
      v3 += 8;
      *(v10 - 1) = v11;
      v12 = v3[1];
      *v10 = *v3;
      v13 = v3[2];
      v10[1] = v12;
      v14 = v3[3];
      v15 = *((_QWORD *)v3 + 8);
      v10[2] = v13;
      v10[3] = v14;
      *((_QWORD *)v10 + 8) = v15;
      return 0LL;
    }
  }
  return 3221226021LL;
}
