/*
 * XREFs of ??1CMILFactory@@MEAA@XZ @ 0x18015A144
 * Callers:
 *     ??_ECMILFactory@@MEAAPEAXI@Z @ 0x18015A1B0 (--_ECMILFactory@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CMILFactory::~CMILFactory(CMILFactory *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 8);
  *(_QWORD *)this = &CMILFactory::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 8) = 0LL;
  }
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
