/*
 * XREFs of ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B09A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C009C868 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_ProcessConnectedSetDescriptorCallback(
        struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  a2[21] = a1;
  result = CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
             (__int64)a1,
             a2,
             (CCD_RECENT_TOPOLOGY_RETRIEVER *)a2);
  a2[21] = 0LL;
  return result;
}
