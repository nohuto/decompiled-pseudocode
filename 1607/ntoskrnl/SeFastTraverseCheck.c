/*
 * XREFs of SeFastTraverseCheck @ 0x1402196FC
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     ObpCheckTraverseAccess @ 0x14066631C (ObpCheckTraverseAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 */

char __fastcall SeFastTraverseCheck(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // cx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // rbx
  PSID v12; // r14

  if ( !a1 )
    return 0;
  v6 = *(_WORD *)(a1 + 2);
  if ( (v6 & 4) != 0 )
  {
    if ( v6 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v7 )
        return 1;
      v8 = a1 + v7;
    }
    if ( v8 )
    {
      v9 = *(unsigned __int16 *)(v8 + 4);
      if ( *(_WORD *)(v8 + 4) )
      {
        if ( (*(_DWORD *)(a2 + 12) & 0x810) == 0 )
        {
          v10 = 0;
          v11 = v8 + 8;
          if ( *(_WORD *)(v8 + 4) )
          {
            v12 = SeWorldSid;
            while ( 1 )
            {
              if ( (*(_BYTE *)(v11 + 1) & 8) == 0 )
              {
                if ( *(_BYTE *)v11 )
                {
                  if ( *(_BYTE *)v11 == 1 && (*(_DWORD *)(v11 + 4) & a3) != 0 )
                    return 0;
                }
                else if ( (a3 & *(_DWORD *)(v11 + 4)) != 0 && RtlEqualSid(v12, (PSID)(v11 + 8)) )
                {
                  return 1;
                }
              }
              ++v10;
              v11 += *(unsigned __int16 *)(v11 + 2);
              if ( v10 >= v9 )
                return 0;
            }
          }
        }
      }
      return 0;
    }
  }
  return 1;
}
