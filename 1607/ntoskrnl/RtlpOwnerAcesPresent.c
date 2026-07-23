/*
 * XREFs of RtlpOwnerAcesPresent @ 0x14008D270
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14000F500 (SeComputeCreatorDeniedRights.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     RtlOwnerAcesPresent @ 0x14008D260 (RtlOwnerAcesPresent.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned __int8 *v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // edi
  int v7; // r12d
  unsigned __int8 v8; // si
  unsigned int v9; // ecx
  unsigned __int8 *v10; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = (unsigned __int8 *)(a2 + 8);
  v5 = *(unsigned __int16 *)(a2 + 4);
  v6 = 0;
  if ( *(_WORD *)(a2 + 4) )
  {
    v7 = 104928;
    do
    {
      v8 = v4[1];
      if ( (v8 & 8) == 0 )
      {
        v9 = *v4;
        if ( (unsigned __int8)v9 <= 0x10u && _bittest(&v7, v9) )
        {
          v10 = &v4[16 * (*((_DWORD *)v4 + 2) & 1) + 12 + 8 * (*((_DWORD *)v4 + 2) & 2)];
        }
        else if ( (_BYTE)v9 == 4 )
        {
          v10 = v4 + 12;
        }
        else
        {
          if ( (unsigned __int8)v9 > 0xAu && (unsigned __int8)(v9 - 13) > 1u )
            goto LABEL_13;
          v10 = v4 + 8;
        }
        if ( v10
          && *(_WORD *)v10 == *SeOwnerRightsSid
          && !memcmp(v10, SeOwnerRightsSid, 4 * (unsigned int)v10[1] + 8)
          && (!a1 || (v8 & a1) != 0) )
        {
          return 1;
        }
      }
LABEL_13:
      ++v6;
      v4 += *((unsigned __int16 *)v4 + 1);
    }
    while ( v6 < v5 );
  }
  return 0;
}
