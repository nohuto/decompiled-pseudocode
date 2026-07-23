/*
 * XREFs of ViTargetAddCountersCallback @ 0x140710238
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViTargetAddCountersCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( *(_QWORD *)v2 == *(_QWORD *)a2 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      *(_DWORD *)(v3 + 80) += *(_DWORD *)(v2 + 80);
      *(_DWORD *)(v3 + 84) += *(_DWORD *)(v2 + 84);
      *(_DWORD *)(v3 + 88) += *(_DWORD *)(v2 + 88);
      *(_DWORD *)(v3 + 92) += *(_DWORD *)(v2 + 92);
      *(_QWORD *)(v3 + 96) += *(_QWORD *)(v2 + 96);
      *(_QWORD *)(v3 + 104) += *(_QWORD *)(v2 + 104);
      *(_QWORD *)(v3 + 112) += *(_QWORD *)(v2 + 112);
      *(_QWORD *)(v3 + 120) += *(_QWORD *)(v2 + 120);
      if ( *(_DWORD *)(a2 + 16) )
      {
        v4 = (_QWORD *)(v3 + 152);
        *(_DWORD *)(v3 + 128) += *(_DWORD *)(v2 + 128);
        v5 = 10LL;
        *(_DWORD *)(v3 + 132) += *(_DWORD *)(v2 + 132);
        *(_DWORD *)(v3 + 136) += *(_DWORD *)(v2 + 136);
        *(_DWORD *)(v3 + 140) += *(_DWORD *)(v2 + 140);
        *(_DWORD *)(v3 + 144) += *(_DWORD *)(v2 + 144);
        *(_DWORD *)(v3 + 148) += *(_DWORD *)(v2 + 148);
        do
        {
          *v4 += *(_QWORD *)((char *)v4 + v2 - v3);
          ++v4;
          --v5;
        }
        while ( v5 );
        *(_DWORD *)(v3 + 232) += *(_DWORD *)(v2 + 248);
        *(_DWORD *)(v3 + 236) += *(_DWORD *)(v2 + 252);
        *(_DWORD *)(v3 + 240) += *(_DWORD *)(v2 + 256);
        *(_DWORD *)(v3 + 244) += *(_DWORD *)(v2 + 260);
        *(_DWORD *)(v3 + 248) += *(_DWORD *)(v2 + 264);
        *(_DWORD *)(v3 + 252) += *(_DWORD *)(v2 + 268);
        *(_DWORD *)(v3 + 256) += *(_DWORD *)(v2 + 272);
      }
    }
  }
  return 1LL;
}
