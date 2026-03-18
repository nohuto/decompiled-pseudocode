/*
 * XREFs of ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x18003788C
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180037978 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800BA674 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 */

char __fastcall CLegacySurfaceManager::ProcessVistaBltToken(
        CLegacySurfaceManager *this,
        union _ULARGE_INTEGER a2,
        bool *a3)
{
  char v3; // bl
  CWindowNode **v5; // rax
  DWORD HighPart; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  _ULARGE_INTEGER v10; // [rsp+48h] [rbp+10h]

  v10 = a2;
  v3 = 0;
  HighPart = a2.HighPart;
  v9 = 0;
  *a3 = 0;
  v8 = 0LL;
  v5 = (CWindowNode **)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), &HighPart);
  if ( v5 )
  {
    CWindowNode::ProcessVistaBltToken(v5[1], v10, a3, &v9);
    return v9;
  }
  return v3;
}
