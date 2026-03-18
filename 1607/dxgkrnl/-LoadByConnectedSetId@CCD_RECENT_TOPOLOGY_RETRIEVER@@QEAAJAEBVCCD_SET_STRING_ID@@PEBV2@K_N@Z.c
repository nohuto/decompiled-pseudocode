/*
 * XREFs of ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C00B8AF0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C00B8870 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C00B8A64 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        const struct CCD_SET_STRING_ID *a3,
        int a4,
        char a5)
{
  __int64 result; // rax

  *((_QWORD *)this + 22) = a3;
  *((_DWORD *)this + 2) = a4;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 6) = 0;
  result = CCD_STORE::ForConnectedSet(
             a2,
             (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_ProcessConnectedSetDescriptorCallback,
             (__int64)this);
  if ( (_DWORD)result == -1073741789 )
    result = 3221225473LL;
  if ( (int)result >= 0 )
  {
    result = *((unsigned int *)this + 4);
    if ( (int)result >= 0 )
    {
      if ( *((_WORD *)this + 12) )
        return CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                 (struct CCD_TOPOLOGY **)this,
                 (CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 16),
                 15,
                 a5);
      else
        return 3221226021LL;
    }
  }
  return result;
}
