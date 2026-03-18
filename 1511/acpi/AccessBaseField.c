/*
 * XREFs of AccessBaseField @ 0x1C0016130
 * Callers:
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 * Callees:
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 *     WriteSystemIO @ 0x1C0017860 (WriteSystemIO.c)
 *     ReadSystemMem @ 0x1C001821C (ReadSystemMem.c)
 *     WriteSystemMem @ 0x1C0018348 (WriteSystemMem.c)
 *     ReadSystemIO @ 0x1C00188D4 (ReadSystemIO.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall AccessBaseField(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // rax
  bool v16; // r11
  char v17; // r9
  int v18; // ecx
  __int64 v19; // rbx
  char v20; // bp
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // rcx
  char v26; // al
  __int64 v29; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a3[3];
  v6 = 0LL;
  v7 = *(_QWORD *)(a2 + 88);
  v9 = 0;
  v10 = 1;
  v11 = *(_QWORD *)v7 + *a3;
  if ( (v5 & 0xF) - 1 <= 3 )
    v10 = 1 << ((v5 & 0xF) - 1);
  v12 = a3[2];
  if ( v12 >= 0x20 )
    v13 = 0LL;
  else
    v13 = 1LL << v12;
  v14 = (v13 - 1) << a3[1];
  if ( 8 * v10 >= 0x20 )
    v15 = 0LL;
  else
    v15 = 1LL << (8 * (unsigned __int8)v10);
  v16 = (~v14 & (v15 - 1)) != 0 && (v5 & 0x60) == 0;
  *a4 &= v14;
  v17 = a5;
  LOBYTE(v29) = v16;
  if ( !a5 && (a3[3] & 0x60) == 0x20 )
    *a4 |= ~v14;
  v18 = *(unsigned __int8 *)(v7 + 12);
  if ( *(_BYTE *)(v7 + 12) )
  {
    if ( v18 == 1 )
    {
      if ( v17 )
      {
        *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, v10, (unsigned int)v14);
      }
      else
      {
        if ( v16 )
          *a4 = (unsigned int)ReadSystemIO((unsigned int)v11, v10, (unsigned int)~(_DWORD)v14) | (unsigned __int64)*a4;
        WriteSystemIO((unsigned int)v11, v10, *(unsigned int *)a4);
      }
    }
    else
    {
      v19 = gpRSAccessHead;
      if ( !gpRSAccessHead )
        goto LABEL_52;
      while ( *(_DWORD *)(v19 + 8) != v18 )
      {
        v19 = *(_QWORD *)v19;
        if ( !v19 )
          goto LABEL_52;
      }
      if ( v19 && *(_QWORD *)(v19 + 16) )
      {
        if ( v17 )
        {
          v20 = 0;
          if ( (gDebugger & 0x100) != 0 )
          {
            _m_prefetchw(&gDebugger);
            v20 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
          }
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, _QWORD, __int64 *, _QWORD, __int64 (__fastcall *)(__int64), __int64))(v19 + 16))(
                  0LL,
                  a2 + 112,
                  v11,
                  v10,
                  a4,
                  *(_QWORD *)(v19 + 24),
                  RestartCtxtCallback,
                  a1 + 328);
          v9 = v21;
          if ( (v20 & 0x10) != 0 )
            _InterlockedOr(&gDebugger, 0x10u);
          if ( v21 == 259 )
          {
            return 32772;
          }
          else if ( v21 )
          {
            LogError(3222536216LL);
            PrintDebugMessage(2, *(unsigned __int8 *)(v7 + 12), v9, 0, 0LL);
            return (unsigned int)-1072431080;
          }
        }
        else
        {
          v9 = PushFrame(a1, 1094931031, 0x60u, (__int64)WriteCookAccess, &v30);
          if ( !v9 )
          {
            v25 = v30;
            *(_QWORD *)(v30 + 32) = a2;
            *(_QWORD *)(v25 + 40) = v19;
            *(_QWORD *)(v25 + 48) = v11;
            *(_DWORD *)(v25 + 56) = v10;
            *(_QWORD *)(v25 + 64) = *a4;
            v26 = v29;
            *(_QWORD *)(v25 + 72) = v14;
            *(_BYTE *)(v25 + 88) = v26;
          }
        }
      }
      else
      {
LABEL_52:
        v9 = -1072431088;
        LogError(3222536208LL);
        PrintDebugMessage(1, *(unsigned __int8 *)(v7 + 12), 0, 0, 0LL);
      }
    }
  }
  else if ( v17 )
  {
    v29 = 0LL;
    if ( v10 > 8 )
    {
      v23 = -1LL;
    }
    else
    {
      if ( v10 != 1LL )
        v6 = v11 % v10;
      if ( v6 )
      {
        memmove(&v29, (const void *)v11, v10);
        v22 = v29;
      }
      else
      {
        switch ( v10 )
        {
          case 1u:
            v22 = *(unsigned __int8 *)v11;
            break;
          case 4u:
            v22 = *(unsigned int *)v11;
            break;
          case 2u:
            v22 = *(unsigned __int16 *)v11;
            break;
          case 8u:
            v22 = *(_QWORD *)v11;
            break;
          default:
            v22 = -1LL;
            break;
        }
      }
      v23 = v14 & v22;
    }
    *a4 = v23;
  }
  else
  {
    if ( v16 )
      *a4 |= ReadSystemMem((void *)v11, v10);
    WriteSystemMem((void *)v11, v10);
  }
  return v9;
}
