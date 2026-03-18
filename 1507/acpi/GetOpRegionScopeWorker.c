/*
 * XREFs of GetOpRegionScopeWorker @ 0x1C000A1B0
 * Callers:
 *     GetOpRegionScope @ 0x1C00081A4 (GetOpRegionScope.c)
 * Callees:
 *     AMLIIterateParentNext @ 0x1C0007700 (AMLIIterateParentNext.c)
 *     IsPciDevice @ 0x1C0008244 (IsPciDevice.c)
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetOpRegionScopeWorker(__int64 a1, int a2, __int64 a3, volatile signed __int32 *a4)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax

  v5 = a2;
  _InterlockedIncrement(a4 + 6);
  if ( a2 >= 0 )
  {
    if ( *((_QWORD *)a4 + 1) )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)a4 + 4);
        if ( (v6 & 0x800) == 0 )
        {
          v7 = *((_QWORD *)a4 + 1);
          *((_DWORD *)a4 + 4) = v6 | 0x800;
          result = IsPciDevice(v7, (__int64)GetOpRegionScopeWorker, (__int64)a4, (_BYTE *)a4 + 20);
          v5 = result;
          if ( (_DWORD)result == 259 )
            return result;
          if ( (int)result < 0 )
            break;
        }
        *((_DWORD *)a4 + 4) &= ~0x800u;
        if ( *((_BYTE *)a4 + 20) )
        {
          **((_QWORD **)a4 + 6) = *((_QWORD *)a4 + 1);
          AMLIReferenceHandleEx(**((_QWORD **)a4 + 6));
          v5 = 0;
          break;
        }
        v10 = AMLIIterateParentNext(*((_QWORD *)a4 + 1));
        *((_QWORD *)a4 + 1) = v10;
        if ( !v10 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v5 = -1073741275;
    }
  }
  if ( *((_DWORD *)a4 + 6) )
    (*((void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))a4 + 4))(*(_QWORD *)a4, v5, 0LL, *((_QWORD *)a4 + 5));
  if ( *(_QWORD *)a4 )
  {
    AMLIDereferenceHandleEx(*(_QWORD *)a4);
    *(_QWORD *)a4 = 0LL;
  }
  v9 = *((_QWORD *)a4 + 1);
  if ( v9 )
  {
    AMLIDereferenceHandleEx(v9);
    *((_QWORD *)a4 + 1) = 0LL;
  }
  ExFreePoolWithTag((PVOID)a4, 0x46706341u);
  return v5;
}
