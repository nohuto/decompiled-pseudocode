/*
 * XREFs of ??_E?$SignedWithClassSignature@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C00334B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[2] |= 0x6D640000u;
  *(_QWORD *)a1 = &SignedWithClassSignature<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
