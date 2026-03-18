/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x180149A8C
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x180149C40 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A57F0 (-InternalRelease@-$ComPtr@VCInteraction@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014A3F0 (-DestroyScrollAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18014AD54 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18014AFC8 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RemoveAll@?$CMap@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@PEAVCManipulation@@V?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18014B088 (-RemoveAll@-$CMap@PEAVCManipulation@@V-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18014C22C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // rsi

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::ReleaseManipulations(this);
  CInteractionTracker::DestroyScrollAnimations(this);
  CInteractionTracker::StopCustomAnimations(this);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
  v4 = *(_DWORD *)(v3 + 304);
  v5 = *(_QWORD *)(v3 + 280);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    if ( (unsigned int)v2 < v4 - 1 )
    {
      do
      {
        v6 = (unsigned int)(v2 + 1);
        *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8 * v6);
        v2 = v6;
      }
      while ( (unsigned int)v6 < *(_DWORD *)(v3 + 304) - 1 );
    }
    --*(_DWORD *)(v3 + 304);
  }
  v7 = (_QWORD *)((char *)this + 480);
  v8 = 3LL;
  do
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *v7,
      v3,
      v5);
    *v7++ = 0LL;
    --v8;
  }
  while ( v8 );
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 560);
  Microsoft::WRL::ComPtr<CInteraction>::InternalRelease((__int64 *)this + 69);
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease((char *)this + 544);
  CMap<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<CManipulation *,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveAll((char *)this + 520);
  `vector destructor iterator'(
    (char *)this + 456,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 416,
    8LL,
    3LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CScrollAnimation>::~ComPtr<CScrollAnimation>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
