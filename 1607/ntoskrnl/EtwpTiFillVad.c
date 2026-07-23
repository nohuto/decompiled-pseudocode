/*
 * XREFs of EtwpTiFillVad @ 0x140228C0C
 * Callers:
 *     EtwpTiFillVadEventWrite @ 0x140228CAC (EtwpTiFillVadEventWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpTiFillVad(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 4LL;
  *(_QWORD *)(a1 + 16) = a2 + 8;
  *(_QWORD *)(a1 + 24) = 8LL;
  *(_QWORD *)(a1 + 32) = a2 + 16;
  *(_QWORD *)(a1 + 40) = 4LL;
  *(_QWORD *)(a1 + 48) = a2 + 20;
  *(_QWORD *)(a1 + 56) = 4LL;
  *(_QWORD *)(a1 + 64) = a2 + 24;
  *(_QWORD *)(a1 + 72) = 8LL;
  *(_QWORD *)(a1 + 80) = a2 + 32;
  *(_QWORD *)(a1 + 88) = 8LL;
  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 && (v3 = *(_QWORD *)(v2 + 8)) != 0 && *(_WORD *)v2 )
  {
    *(_DWORD *)(a1 + 104) = *(unsigned __int16 *)(v2 + 2);
    *(_QWORD *)(a1 + 96) = v3;
    *(_DWORD *)(a1 + 108) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 104) = 2LL;
    *(_QWORD *)(a1 + 96) = &unk_140261F78;
  }
  return 7LL;
}
