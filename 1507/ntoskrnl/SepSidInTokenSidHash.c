/*
 * XREFs of SepSidInTokenSidHash @ 0x1400CD250
 * Callers:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     SepTokenIsOwner @ 0x1400CD420 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheckEx @ 0x14015A940 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140162460 (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x14024F3D8 (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x14026A658 (AuthzBasepDeviceMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14040FC40 (SepIsImpersonationAllowedDueToCapability.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 */

bool __fastcall SepSidInTokenSidHash(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  unsigned __int8 *v7; // rbx
  __int64 v10; // rax
  unsigned __int8 v11; // bp
  __int16 v12; // r12
  unsigned int v13; // r13d
  unsigned __int64 v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r14
  int v19; // eax
  unsigned int v21; // esi
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+68h] [rbp+10h]
  __int64 v26; // [rsp+68h] [rbp+10h]
  unsigned __int8 v27; // [rsp+88h] [rbp+30h]

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v7) )
    return 1;
  if ( !a1 || !v7 )
    return 0;
  v10 = v7[1];
  v11 = 0;
  v12 = *(_WORD *)v7;
  v13 = 4 * v10 + 8;
  LODWORD(v10) = v7[4 * v10 + 4];
  v14 = *(_QWORD *)(a1 + 8 * (v10 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)v10 >> 4) + 144);
  if ( !v14 )
  {
LABEL_14:
    v21 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 0x40u )
    {
      v22 = 64;
      v23 = *(_QWORD *)(a1 + 8);
      v26 = v23;
      do
      {
        v18 = v23 + 16LL * v22;
        if ( **(_WORD **)v18 == v12 )
        {
          if ( !memcmp(v7, *(const void **)v18, v13) )
            goto LABEL_10;
          v23 = v26;
        }
        ++v22;
      }
      while ( v22 < v21 );
    }
    return 0;
  }
  while ( 1 )
  {
    LOBYTE(v15) = v14;
    v27 = v14;
    if ( (_BYTE)v14 )
      break;
LABEL_22:
    v11 += 8;
    v14 >>= 8;
    if ( !v14 )
      goto LABEL_14;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v24 = v16;
  v17 = v11;
  while ( 1 )
  {
    v25 = SidHashByteToIndexLookupTable[(unsigned __int8)v15];
    v18 = v16 + 16LL * (unsigned int)(v17 + v25);
    if ( **(_WORD **)v18 == v12 )
      break;
LABEL_21:
    v15 = v27 ^ (1 << v25);
    v17 = v11;
    v27 = v15;
    if ( !(_BYTE)v15 )
      goto LABEL_22;
  }
  if ( memcmp(v7, *(const void **)v18, v13) )
  {
    v16 = v24;
    goto LABEL_21;
  }
LABEL_10:
  if ( !a5 && v18 == *(_QWORD *)(a1 + 8) && ((*(_DWORD *)(v18 + 8) & 0x10) == 0 || a4) )
    return 1;
  v19 = *(_DWORD *)(v18 + 8);
  return (v19 & 4) != 0 || a4 && (v19 & 0x10) != 0;
}
