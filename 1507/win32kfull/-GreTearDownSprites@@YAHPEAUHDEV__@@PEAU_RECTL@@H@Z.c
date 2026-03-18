/*
 * XREFs of ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C026E034
 * Callers:
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C026A110 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C026EC40 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C0270BF0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall GreTearDownSprites(HDEV a1, struct _RECTL *a2)
{
  __int64 result; // rax
  unsigned int v5; // edi

  if ( ((_DWORD)a1[14] & 1) == 0 )
    return 0LL;
  if ( !*((_DWORD *)a1 + 41) )
    return bSpTearDownSprites(a1, a2, 0);
  v5 = 0;
  do
    result = bSpTearDownSprites(*(HDEV *)(*((_QWORD *)a1 + 21) + 8LL * v5++), a2, 0);
  while ( v5 < *((_DWORD *)a1 + 41) );
  return result;
}
