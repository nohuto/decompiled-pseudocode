/*
 * XREFs of ?IsVbr@PC_DISK@@QEAAEXZ @ 0x14023CB00
 * Callers:
 *     ?Reset@PC_DISK@@QEAAJXZ @ 0x140147BE0 (-Reset@PC_DISK@@QEAAJXZ.c)
 * Callees:
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140147F60 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 */

char __fastcall PC_DISK::IsVbr(PC_DISK *this)
{
  __int64 v1; // rdi
  char v2; // bl
  int v4; // ecx
  _BYTE *i; // rax
  unsigned __int64 v6; // r8
  unsigned int v7; // esi

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  if ( *(_WORD *)(v1 + 510) == 0xAA55 && ((*(_BYTE *)v1 + 23) & 0xFD) == 0 )
  {
    v2 = 1;
    if ( *((_DWORD *)this + 4) == 11 )
    {
      if ( *(_QWORD *)(v1 + 3) == *(_QWORD *)"NTFS    " )
        return v2;
      v4 = 0;
      for ( i = (_BYTE *)(v1 + 450); !*i; i += 16 )
      {
        if ( (unsigned int)++v4 >= 4 )
          return v2;
      }
    }
    v6 = *((_QWORD *)this + 4);
    v7 = 0;
    while ( MBR_ENTRY::Validate((MBR_ENTRY *)(16LL * v7 + v1 + 446), 0, v6) )
    {
      if ( ++v7 >= 4 )
        return 0;
    }
  }
  return v2;
}
