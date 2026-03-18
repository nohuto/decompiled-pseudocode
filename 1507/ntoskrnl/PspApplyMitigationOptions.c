/*
 * XREFs of PspApplyMitigationOptions @ 0x140469EBC
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObReferenceProcessHandleTable @ 0x1404249F8 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x1405517F8 (ExEnableHandleExceptions.c)
 */

__int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, unsigned __int64 *a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  bool v8; // zf
  int v9; // eax
  __int64 result; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  char v14; // al
  __int64 v15; // rcx

  v5 = *a3;
  if ( *(_QWORD *)(a1 + 1064) )
  {
    v14 = 0;
    switch ( *a3 & 3 )
    {
      case 1uLL:
        v14 = 13;
        break;
      case 2uLL:
        v14 = 58;
        break;
      case 3uLL:
        v14 = 9;
        break;
    }
    v15 = *a3 & 0x30;
    if ( v15 == 16 )
    {
      v14 |= 8u;
    }
    else if ( v15 == 32 )
    {
      v14 |= 0x48u;
    }
    *(_BYTE *)(a1 + 447) = v14;
  }
  if ( (v5 & 0x300) != 0x100 )
  {
    if ( (v5 & 0x300) != 0x300 )
      goto LABEL_4;
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x1000000u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x8000000u);
LABEL_4:
  if ( (v5 & 0x30000) != 0 )
    v8 = (v5 & 0x30000) == 0x20000;
  else
    v8 = (a4 & 1) == 0;
  if ( v8 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x20000u);
  if ( (*(_DWORD *)(a1 + 768) & 0x20000) == 0 )
  {
    if ( (v5 & 0x300000) == 0 )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( (v5 & 0x300000) == 0x100000 )
LABEL_11:
      _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x2000000u);
  }
LABEL_12:
  if ( !a2 )
    goto LABEL_17;
  if ( (v5 & 0x3000000) == 0 )
  {
    if ( (a4 & 4) == 0 )
      goto LABEL_15;
LABEL_42:
    v11 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)a1);
    if ( v11 )
    {
      LOBYTE(v12) = 1;
      ExEnableHandleExceptions(v11, v12);
      _m_prefetchw((const void *)(a1 + 736));
      v13 = *(_QWORD *)(a1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), v13 - 2, v13) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 736));
    }
    goto LABEL_15;
  }
  if ( (v5 & 0x3000000) == 0x1000000 )
    goto LABEL_42;
LABEL_15:
  if ( *(int *)(a2 + 768) < 0 )
    v5 = v5 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
LABEL_17:
  if ( (v5 & 0x30000000) == 0x10000000 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x80000000);
  if ( (v5 & 0x3000000000LL) == 0x1000000000LL )
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x400u);
  if ( (v5 & 0x300000000LL) == 0x100000000LL )
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x4000000u);
  if ( (v5 & 0x30000000000LL) != 0 )
  {
    if ( (v5 & 0x30000000000LL) != 0x10000000000LL )
      goto LABEL_27;
  }
  else if ( (a4 & 8) == 0 )
  {
    goto LABEL_27;
  }
  if ( dword_1403D00D4 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x10u);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 5u);
  }
LABEL_27:
  if ( (v5 & 0x300000000000LL) == 0x100000000000LL )
  {
    if ( *(_BYTE *)(a1 + 1712) < 8u )
      *(_BYTE *)(a1 + 1712) = 8;
    if ( *(_BYTE *)(a1 + 1713) < 8u )
      *(_BYTE *)(a1 + 1713) = 8;
  }
  if ( (v5 & 0x30) == 0 && (*(_DWORD *)(a1 + 772) & 0x10) != 0 )
    v5 = v5 & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
  v9 = HIWORD(a4) & 3;
  if ( v9 == 1 )
  {
    v5 = v5 & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
  }
  else if ( v9 == 3 && (v5 & 0x3000000000000LL) != 0x1000000000000LL )
  {
    v5 |= 0x3000000000000uLL;
  }
  result = v5 & 0x3000000000000LL;
  if ( (v5 & 0x3000000000000LL) == 0x1000000000000LL )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1716), 4u);
  }
  else if ( result == 0x3000000000000LL )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1716), 8u);
  }
  *a3 = v5;
  return result;
}
