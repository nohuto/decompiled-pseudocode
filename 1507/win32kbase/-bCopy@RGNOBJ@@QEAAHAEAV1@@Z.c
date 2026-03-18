/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003D0A0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0042C40 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004BCE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C004BEAC (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v2; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  int v12; // [rsp+28h] [rbp-8h]

  v2 = *(_QWORD *)this;
  v5 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  v6 = *(_QWORD *)a2;
  if ( v5 > 0xD8 )
  {
    if ( *(_DWORD *)(v6 + 24) <= 0xD8u )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    }
    else
    {
      v8 = *(_DWORD *)(v6 + 80);
      if ( v5 >= v8 )
      {
        RGNOBJ::vCopy(this, a2);
        return 1LL;
      }
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11, v8);
    }
    v10 = 0;
  }
  else
  {
    if ( *(_DWORD *)(v6 + 24) <= 0xD8u )
    {
      memmove((void *)(v2 + 80), (const void *)(v6 + 80), *(unsigned int *)(v6 + 80) - 80LL);
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                          - *(_DWORD *)a2
                                          - 104
                                          + *(_QWORD *)this
                                          + 104LL;
      return 1LL;
    }
    v9 = *(_DWORD *)(v6 + 80);
    v10 = 0;
    v11 = 0LL;
    v12 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v11, v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v11);
  }
  if ( v11 )
  {
    RGNOBJ::vCopy((RGNOBJ *)&v11, a2);
    v10 = RGNOBJ::bSwap(this, (struct RGNOBJ *)&v11);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
  return v10;
}
