/*
 * XREFs of ?Rot13DecodeString@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048CA8
 * Callers:
 *     ?TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPEAUHSTRING__@@22PEAUIJsonObject@Json@Data@Windows@@@Z @ 0x180049274 (-TryReportInteraction@TargetedContent@ContentManagement@@YAXW4TargetedContentInteraction@12@_NPE.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX$$QEAV12@@Z @ 0x1800273A0 (-_Assign_rv@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180048B5C (-Rot13EncodeStringHelper@Details@Obfuscation@ContentManagement@@YA-AV-$basic_string@GU-$char_tra.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall ContentManagement::Obfuscation::Rot13DecodeString(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  void *v5[4]; // [rsp+28h] [rbp-30h] BYREF

  v3 = (_QWORD *)ContentManagement::Obfuscation::Details::Rot13EncodeStringHelper((__int64)v5, a2);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::_Assign_rv(a1, v3);
  if ( v5[3] >= (void *)8 )
    operator delete(v5[0]);
  return a1;
}
