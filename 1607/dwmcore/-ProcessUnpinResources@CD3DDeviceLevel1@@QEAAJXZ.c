/*
 * XREFs of ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18007E968
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ProcessUnpinResources(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  char *v5; // r14
  int v6; // eax
  __int64 v7; // r15

  v1 = *((unsigned int *)this + 262);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v5 = (char *)this + 1024;
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 66) + 56LL))(
           *((_QWORD *)this + 66),
           *((_QWORD *)this + 128),
           (unsigned int)v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1133u);
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *(_QWORD *)v5) + 16LL))(*(_QWORD *)(v7 + *(_QWORD *)v5));
      v7 += 8LL;
      --v1;
    }
    while ( v1 );
    *((_DWORD *)v5 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5, 8LL);
  }
  return CD3DDeviceLevel1::TranslateDriverError(this, v2, 0LL);
}
