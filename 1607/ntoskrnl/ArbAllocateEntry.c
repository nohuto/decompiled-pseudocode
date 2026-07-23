/*
 * XREFs of ArbAllocateEntry @ 0x1405598D0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAllocateEntry(__int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // bp
  unsigned __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  unsigned __int64 v11; // rcx
  _QWORD *i; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned __int64 v16; // rbx

  v2 = 0;
  v5 = a2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] + 10000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v5 < a2 || !*(_QWORD *)(v5 + 32) )
      {
        for ( i = (_QWORD *)(a2 + 32); *i; i += 10 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128))(
            *(_QWORD *)(i[1] + 40LL),
            *(i - 4),
            *(_QWORD *)(*i + 72LL));
          v13 = i[1];
          v14 = *i;
          *(_QWORD *)(v14 + 80) = *(_QWORD *)(v13 + 40);
        }
        v15 = 0;
        goto LABEL_24;
      }
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 224))(a1, v5);
      if ( (int)result < 0 )
        return result;
      if ( !v2 )
        break;
      v9 = *(_QWORD *)(v5 + 40);
      v2 = 0;
      *(_QWORD *)(v5 + 120) = 0LL;
      if ( !*(_QWORD *)(v9 + 16) )
        goto LABEL_11;
      (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 264))(a1, v5);
      v10 = *(_WORD *)(v5 + 64);
      if ( (v10 & 0x40) != 0 )
      {
        *(_WORD *)(v5 + 64) = v10 & 0xFFBF;
        goto LABEL_11;
      }
      v11 = *(_QWORD *)v5 - 1LL;
      if ( v11 > *(_QWORD *)v5 || v11 < **(_QWORD **)(v5 + 40) || MEMORY[0xFFFFF78000000008] > v7 )
        break;
      *(_QWORD *)(v5 + 24) = v11;
LABEL_7:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 248))(a1, v5) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) )
        (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 256))(a1, v5);
      else
        *(_DWORD *)(*(_QWORD *)(v5 + 32) + 88LL) = 2;
      v5 += 80LL;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 240))(a1, v5) )
      goto LABEL_7;
LABEL_11:
    if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
      v6 = 1;
    if ( v5 == a2 )
      break;
    v2 = 1;
    v5 -= 80LL;
  }
  v15 = v6 != 0 ? -1073739512 : -1073741823;
LABEL_24:
  if ( *(_QWORD *)(a2 + 32) )
  {
    v16 = a2 + 64;
    do
    {
      if ( (*(_BYTE *)v16 & 0x10) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v16 + 8), 0);
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_WORD *)v16 &= ~0x10u;
      }
      v16 += 80LL;
    }
    while ( *(_QWORD *)(v16 - 32) );
  }
  return v15;
}
