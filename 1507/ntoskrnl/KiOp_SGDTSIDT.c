/*
 * XREFs of KiOp_SGDTSIDT @ 0x14020AA54
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14016F9C0 (KiOpRetrieveRegMemAddress.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rdi
  unsigned int v4; // ecx
  char *v5; // r8
  __int64 Src; // [rsp+28h] [rbp-30h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+68h] [rbp+10h] BYREF
  void *v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  if ( KiNPIEPEnabled && *(_BYTE *)(a1 + 73) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 57) & 0x38) != 0 )
      v2 = KiOpIdtr;
    else
      v2 = KiOpGdtr;
    v8 = -1;
    Src = v2;
    v3 = *(_QWORD *)(a1 + 24);
    v11 = v3;
    *(_DWORD *)v3 = -1073741819;
    if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v10, &v9, 0LL) < 0 )
    {
      v10 = (void *)-1LL;
    }
    else
    {
      v4 = *(_BYTE *)(a1 + 50) != 0 ? 6 : 10;
      if ( v9 == 1 )
      {
        v5 = (char *)v10 + v4;
        if ( (unsigned __int64)v5 > MmUserProbeAddress || v5 < v10 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v10, &Src, v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
      ++KiOpDescriptorTableStoreSkip;
      *(_BYTE *)(a1 + 88) = 1;
    }
    if ( !*(_BYTE *)(a1 + 88) )
    {
      *(_DWORD *)v3 = -1073741819;
      *(_QWORD *)(v3 + 32) = 1LL;
      *(_QWORD *)(v3 + 40) = v10;
      *(_BYTE *)(a1 + 89) = 1;
    }
  }
  return 0LL;
}
