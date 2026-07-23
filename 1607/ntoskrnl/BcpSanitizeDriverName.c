/*
 * XREFs of BcpSanitizeDriverName @ 0x14023A448
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140239D28 (BcpDisplayErrorInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BcpSanitizeDriverName(unsigned __int16 *a1, __int64 a2)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rax
  __int16 *v5; // r8
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r11
  __int16 v11; // dx
  unsigned __int64 v12; // rdi
  __int64 result; // rax

  v3 = *a1;
  v4 = *(unsigned __int16 *)(a2 + 2) - 2LL;
  v5 = (__int16 *)*((_QWORD *)a1 + 1);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v3 >= v4 )
    v7 = v4 >> 1;
  else
    LODWORD(v7) = (unsigned int)v3 >> 1;
  v8 = 0;
  if ( (_DWORD)v7 )
  {
    v8 = v7;
    v9 = v6 - (_QWORD)v5;
    v10 = (unsigned int)v7;
    do
    {
      v11 = *v5;
      if ( (unsigned __int16)(*v5 - 32) <= 0x3Fu
        && (v12 = 0x87FFFFFE03FF4001uLL, _bittest64((const __int64 *)&v12, (unsigned __int16)(v11 - 32)))
        || (unsigned __int16)(v11 - 97) <= 0x19u )
      {
        *(__int16 *)((char *)v5 + v9) = v11;
      }
      else
      {
        *(__int16 *)((char *)v5 + v9) = 32;
      }
      ++v5;
      --v10;
    }
    while ( v10 );
  }
  result = v8;
  *(_WORD *)a2 = 2 * v8;
  *(_WORD *)(v6 + 2LL * v8) = 0;
  return result;
}
