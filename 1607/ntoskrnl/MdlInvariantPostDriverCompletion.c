/*
 * XREFs of MdlInvariantPostDriverCompletion @ 0x140222D20
 * Callers:
 *     IovpCompleteRequest4 @ 0x14070B5FC (IovpCompleteRequest4.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     MdlInvariantFindMdlInfo @ 0x140222C2C (MdlInvariantFindMdlInfo.c)
 */

void __fastcall MdlInvariantPostDriverCompletion(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  int v4; // esi
  char *MdlInfo; // rax
  __int64 v6; // r11
  __int64 v7; // r11
  _QWORD *v8; // r11

  v2 = *(_QWORD **)(a2 + 8);
  if ( !*v2 )
  {
    if ( (v4 = *(char *)(a2 + 67), v4 >= *(char *)(a2 + 66) - 1)
      && (MdlInfo = (char *)MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8))) != 0LL
      || (v6 = *(_QWORD *)(a1 + 224)) != 0
      && (v7 = *(_QWORD *)(v6 + 16)) != 0
      && (MdlInfo = (char *)MdlInvariantFindMdlInfo(a1, v7)) != 0LL
      && (MdlInfo[28] == v4 + 1 || v8 != v2) )
    {
      memset(MdlInfo, 0, 0x20uLL);
    }
  }
}
