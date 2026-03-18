/*
 * XREFs of ?ppfeGetPFEFromUFIInternal@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C0268A2C
 * Callers:
 *     ?ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1C02689F0 (-ppfeGetPFEFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C001E298 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1C0267D30 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 */

struct PFE *__fastcall ppfeGetPFEFromUFIInternal(struct _UNIVERSAL_FONT_ID *a1, int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v7; // rbp
  struct _FONTHASH **v8; // rax
  struct _HASHBUCKET *v9; // rax
  _QWORD *i; // rsi
  __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  struct _KTHREAD *v14; // rdx
  int v15; // ecx
  _QWORD v17[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = -1;
  v7 = 0LL;
  if ( a2 )
    v8 = gpPFTPrivate;
  else
    v8 = gpPFTPublic;
  if ( v8 )
  {
    v17[0] = v8 + 2;
    v17[1] = v8[2];
    v9 = FHOBJ::pbktSearch((FHOBJ *)v17, 0LL, 0LL, a1, 0);
    if ( v9 )
    {
      for ( i = (_QWORD *)*((_QWORD *)v9 + 1); i; i = (_QWORD *)*i )
      {
        v11 = i[1];
        v12 = *(_DWORD *)a1;
        v18 = v11;
        if ( *(_DWORD *)(v11 + 92) == v12
          && *(_DWORD *)(v11 + 96) == *((_DWORD *)a1 + 1)
          && (!a3 || (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v18)) )
        {
          v13 = *(_DWORD *)(v11 + 12);
          if ( (v13 & 2) == 0 )
          {
            v14 = *(struct _KTHREAD **)(v11 + 104);
            v15 = 0;
            if ( !v14 || v14 == KeGetCurrentThread() )
              v15 = 2;
            if ( (v13 & 8) == 0 )
              ++v15;
            if ( v15 > v4 )
            {
              v7 = i[1];
              v4 = v15;
            }
          }
        }
      }
      return (struct PFE *)v7;
    }
  }
  return (struct PFE *)v3;
}
