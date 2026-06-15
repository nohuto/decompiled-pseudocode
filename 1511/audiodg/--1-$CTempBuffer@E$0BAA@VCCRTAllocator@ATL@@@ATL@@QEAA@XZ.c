/*
 * XREFs of ??1?$CTempBuffer@E$0BAA@VCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x140035D84
 * Callers:
 *     _ATL::CRegParser::AddValue_::_1_::dtor$0 @ 0x140036B3B (_ATL--CRegParser--AddValue_--_1_--dtor$0.c)
 *     _ATL::CRegParser::AddValue_::_1_::dtor$2 @ 0x140036B6E (_ATL--CRegParser--AddValue_--_1_--dtor$2.c)
 *     _ATL::CRegObject::RegisterFromResource_::_1_::dtor$1 @ 0x140038744 (_ATL--CRegObject--RegisterFromResource_--_1_--dtor$1.c)
 * Callees:
 *     ?FreeHeap@?$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ @ 0x140037A44 (-FreeHeap@-$CTempBuffer@G$0EAA@VCCRTAllocator@ATL@@@ATL@@AEAAXXZ.c)
 */

__int64 __fastcall ATL::CTempBuffer<unsigned char,256,ATL::CCRTAllocator>::~CTempBuffer<unsigned char,256,ATL::CCRTAllocator>(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (__int64)(a1 + 1);
  if ( (_QWORD *)*a1 != a1 + 1 )
    return ATL::CTempBuffer<unsigned short,1024,ATL::CCRTAllocator>::FreeHeap();
  return result;
}
