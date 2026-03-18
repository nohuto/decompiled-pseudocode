/*
 * XREFs of ?FxCalculateTotalStringSize@@YA_KPEAUFxCollectionInternal@@EPEAE@Z @ 0x1C00122E0
 * Callers:
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0011AA0 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C0070BB0 (imp_WdfRegistryAssignMultiString.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxCalculateTotalStringSize(
        FxCollectionInternal *StringCollection,
        unsigned __int8 Verify,
        unsigned __int8 *ContainsOnlyStrings)
{
  _LIST_ENTRY *Flink; // r10
  __int64 i; // r9
  FxCollectionInternal *p_Blink; // r10
  __int64 v6; // rax

  Flink = StringCollection->m_ListHead.Flink;
  for ( i = 0LL; ; i += (unsigned __int16)(*(_WORD *)(v6 + 104) + 2) )
  {
    p_Blink = (FxCollectionInternal *)&Flink[-1].Blink;
    if ( p_Blink == StringCollection )
      break;
    v6 = *(_QWORD *)&p_Blink->m_Count;
    if ( Verify && *(_WORD *)(v6 + 8) != 4103 )
    {
      *ContainsOnlyStrings = 0;
      return 0LL;
    }
    Flink = p_Blink->m_ListHead.Flink;
  }
  if ( ContainsOnlyStrings )
    *ContainsOnlyStrings = 1;
  if ( StringCollection->m_Count )
    return i + 2;
  else
    return 4LL;
}
