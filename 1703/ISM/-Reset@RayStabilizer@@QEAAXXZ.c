/*
 * XREFs of ?Reset@RayStabilizer@@QEAAXXZ @ 0x18004E434
 * Callers:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x18002D084 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800406F8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ?TryDemote@MPCInputProviderBase@@UEAA_NXZ @ 0x18004EC50 (-TryDemote@MPCInputProviderBase@@UEAA_NXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall RayStabilizer::Reset(RayStabilizer *this)
{
  __int64 v3; // rdi
  char *v4; // rcx
  char *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF

  while ( *((_QWORD *)this + 4) )
  {
    if ( (*((_QWORD *)this + 4))-- == 1LL )
      *((_QWORD *)this + 3) = 0LL;
  }
  v3 = *((_QWORD *)this + 2);
  while ( v3 )
  {
    --v3;
    v4 = *(char **)(*((_QWORD *)this + 1) + 8 * v3);
    if ( v4 )
      std::_Deallocate(v4, 1uLL, 0x64uLL);
  }
  v5 = (char *)*((_QWORD *)this + 1);
  if ( v5 )
    std::_Deallocate(v5, *((_QWORD *)this + 2), 8uLL);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  memset(v8, 0, sizeof(v8));
  v6 = v8[0];
  *((_BYTE *)this + 80) = 0;
  v7 = v8[1];
  *((_OWORD *)this + 3) = v6;
  *((_OWORD *)this + 4) = v7;
}
