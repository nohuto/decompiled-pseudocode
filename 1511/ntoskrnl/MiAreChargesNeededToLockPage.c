/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140066150
 * Callers:
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int16 v3; // ax
  __int64 v4; // rdx
  unsigned int v5; // r8d

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0x4000000000000000LL) != 0 )
  {
    if ( (v2 & 0x10000000000000LL) == 0 )
    {
LABEL_3:
      v3 = *(_WORD *)(a1 + 32);
      v4 = v1 & 0x3FFFFFFFFFFFFFFFLL;
      v5 = 0;
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          if ( !v4 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
            return v5;
        }
        else if ( v3 != 2 || !v4 || (*(_BYTE *)(a1 + 34) & 8) == 0 )
        {
          return v5;
        }
      }
      return 1;
    }
  }
  else if ( (v2 & 0x10000000000000LL) == 0 )
  {
    goto LABEL_3;
  }
  return 0LL;
}
