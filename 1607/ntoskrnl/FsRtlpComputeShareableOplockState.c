/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140078270
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A0D78 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401B944C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // edx
  _QWORD *v2; // r8
  int v3; // ebx
  __int64 result; // rax
  int v5; // edx
  _QWORD *v6; // r9
  char v7; // r11
  char v8; // r10
  int v9; // r8d
  __int64 *v10; // rdx
  int v11; // edx

  v1 = *(_DWORD *)(a1 + 144);
  v2 = (_QWORD *)(a1 + 40);
  v3 = v1 & 0x1010000;
  if ( (_QWORD *)*v2 == v2 )
  {
    if ( *(_QWORD *)(a1 + 56) == a1 + 56 )
    {
      result = a1 + 72;
      if ( *(_QWORD *)result == result )
      {
        v5 = v1 & 0x20 | 1;
        goto LABEL_6;
      }
    }
    if ( (_QWORD *)*v2 == v2 )
      goto LABEL_19;
  }
  result = a1 + 56;
  if ( *(_QWORD *)result != result || (result = a1 + 72, *(_QWORD *)result != result) )
  {
    v5 = v1 & 0x20 | 0xB000;
    goto LABEL_6;
  }
  if ( (_QWORD *)*v2 == v2 )
  {
LABEL_19:
    result = a1 + 56;
    if ( *(_QWORD *)result != result )
    {
      v5 = v1 & 0x20 | 0x3000;
      goto LABEL_6;
    }
    if ( (_QWORD *)*v2 == v2 )
    {
      v9 = 0;
      *(_DWORD *)(a1 + 144) = v1 & 0x20 | 0x3000;
      v10 = *(__int64 **)(a1 + 72);
      if ( v10 != (__int64 *)(a1 + 72) )
      {
        while ( 1 )
        {
          if ( v9 )
          {
            result = v10[6] & 0xF00000;
            if ( (_DWORD)result != v9 )
              break;
          }
          v9 = v10[6] & 0xF00000;
          *(_DWORD *)(a1 + 144) |= v9;
          v10 = (__int64 *)*v10;
          if ( v10 == (__int64 *)(a1 + 72) )
            goto LABEL_7;
        }
        result = *(_DWORD *)(a1 + 144) & 0x20 | 0x3000u;
        *(_DWORD *)(a1 + 144) = result;
      }
      goto LABEL_7;
    }
  }
  v6 = (_QWORD *)*v2;
  v7 = 0;
  v8 = 0;
  if ( (_QWORD *)*v2 == v2 )
    goto LABEL_18;
  while ( 1 )
  {
    result = v6[2];
    if ( *(_DWORD *)(result + 24) == 590400 )
      break;
    v8 = 1;
    if ( v7 )
      goto LABEL_28;
LABEL_16:
    v6 = (_QWORD *)*v6;
    if ( v6 == v2 )
      goto LABEL_17;
  }
  v7 = 1;
LABEL_28:
  if ( !v8 )
    goto LABEL_16;
LABEL_17:
  if ( v7 )
  {
    v11 = v1 & 0x20;
    if ( v8 )
      v5 = v11 | 0x1010;
    else
      v5 = v11 | 0x1000;
  }
  else
  {
LABEL_18:
    v5 = v1 & 0x20 | 0x10;
  }
LABEL_6:
  *(_DWORD *)(a1 + 144) = v5;
LABEL_7:
  *(_DWORD *)(a1 + 144) |= v3;
  return result;
}
