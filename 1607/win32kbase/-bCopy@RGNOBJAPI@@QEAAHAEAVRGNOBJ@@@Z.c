/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0036830
 * Callers:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C002E1E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0034588 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0036900 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v2; // rax
  __int64 v4; // r10
  unsigned int v6; // edx
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 result; // rax
  unsigned int v10; // ebx
  __int16 *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v6 = 216;
  v7 = *(unsigned int *)(v2 + 80);
  v8 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( (v8 >= (unsigned int)v7 || *(_DWORD *)(v2 + 24) <= 0xD8u) && (v8 <= 0xD8 || *(_DWORD *)(v2 + 24) > 0xD8u) )
  {
    memmove((void *)(v4 + 80), (const void *)(v2 + 80), v7 - 80);
    result = 1LL;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_DWORD *)(*(_QWORD *)a2 + 40LL)
                                        - *(_DWORD *)a2
                                        - 104
                                        + *(_QWORD *)this
                                        + 104LL;
  }
  else
  {
    if ( (unsigned int)v7 > 0xD8 )
      v6 = *(_DWORD *)(v2 + 80);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11, v6);
    v10 = 0;
    if ( v11[0] )
    {
      RGNOBJ::vCopy((RGNOBJ *)v11, a2);
      v10 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v11);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP(v11);
    return v10;
  }
  return result;
}
