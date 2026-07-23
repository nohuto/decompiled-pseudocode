/*
 * XREFs of SdbpCheckRuntimePlatformV2 @ 0x1406C324C
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpCheckRuntimePlatformV2(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // edi
  int v6; // ebx
  unsigned int DWORDTag; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  int v16; // ebx
  __int64 result; // rax

  v5 = *(_DWORD *)(a2 + 544);
  v6 = 0;
  DWORDTag = SdbReadDWORDTag(a3, a5, 0x1Fu);
  if ( DWORDTag != -1073741824 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v6 )
        goto LABEL_21;
      if ( ((DWORDTag >> v9) & 0x40) != 0 )
      {
        v10 = (DWORDTag >> v9) & 0x3F;
        if ( !v10 )
        {
          LOBYTE(v16) = v5;
          goto LABEL_19;
        }
        v11 = v10 - 5;
        if ( !v11 )
        {
          v16 = (unsigned __int8)v5 >> 3;
LABEL_19:
          v6 = v16 & 1;
          goto LABEL_20;
        }
        v12 = v11 - 4;
        if ( v12 )
        {
          v13 = v12 - 2;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 )
                v6 = (v5 & 2) != 0;
            }
            else
            {
              v6 = (v5 & 4) != 0;
            }
            goto LABEL_20;
          }
          v6 = 0;
          v15 = (v5 & 4) == 0;
        }
        else
        {
          v6 = 0;
          v15 = (v5 & 2) == 0;
        }
        LOBYTE(v6) = !v15;
      }
LABEL_20:
      v9 += 8;
      if ( v9 >= 24 )
        goto LABEL_21;
    }
  }
  v6 = 1;
LABEL_21:
  result = 1LL;
  *a1 = v6;
  return result;
}
