/*
 * XREFs of ??0CEffectCompilationService@@AEAA@PEAUIMessageSession@@@Z @ 0x180093BB8
 * Callers:
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180093B18 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::CEffectCompilationService(
        CEffectCompilationService *this,
        struct IMessageSession *a2)
{
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_BYTE *)this + 80) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}
