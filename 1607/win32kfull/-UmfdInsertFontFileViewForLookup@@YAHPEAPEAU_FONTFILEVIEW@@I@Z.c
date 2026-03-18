/*
 * XREFs of ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02A4F38
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C025A374 (UmfdLoadFontFileView.c)
 *     GreMakeFontDir @ 0x1C02B5C2C (GreMakeFontDir.c)
 * Callees:
 *     ??0AutoExclusiveUmfdFileViewLock@@QEAA@XZ @ 0x1C0021514 (--0AutoExclusiveUmfdFileViewLock@@QEAA@XZ.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0052ABC (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C02A40B8 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C02A41CC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 */

__int64 __fastcall UmfdInsertFontFileViewForLookup(struct _FONTFILEVIEW **a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v5; // ebx
  struct _FONTFILEVIEW **v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // ebp
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v5 = 1;
  if ( !a2 )
  {
LABEL_5:
    AutoExclusiveUmfdFileViewLock::AutoExclusiveUmfdFileViewLock((AutoExclusiveUmfdFileViewLock *)&v16);
    if ( UmfdFileviewLookup )
    {
      v8 = 0LL;
      if ( !a2 )
      {
LABEL_19:
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
        return v5;
      }
      v9 = (__int64 *)a1;
LABEL_8:
      v10 = g_UmfdFileViewKey;
      v11 = g_UmfdFileViewKey;
      while ( 1 )
      {
        v12 = v10 == -1;
        v13 = v10 + 1;
        g_UmfdFileViewKey = v13;
        if ( v12 )
        {
          v13 = 1;
          g_UmfdFileViewKey = 1;
        }
        if ( v11 == v13 )
          break;
        if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v7, &g_UmfdFileViewKey, &v17) )
        {
          if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(v7, v14, &a1[v8]) )
            break;
          v7 = *v9;
          v8 = (unsigned int)(v8 + 1);
          ++v9;
          *(_DWORD *)(v7 + 64) = g_UmfdFileViewKey;
          if ( (unsigned int)v8 < a2 )
            goto LABEL_8;
          goto LABEL_19;
        }
        v10 = g_UmfdFileViewKey;
      }
    }
    v5 = 0;
    goto LABEL_19;
  }
  v6 = a1;
  while ( *v6 )
  {
    ++v2;
    ++v6;
    if ( v2 >= a2 )
      goto LABEL_5;
  }
  return 0LL;
}
