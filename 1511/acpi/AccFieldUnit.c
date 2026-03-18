/*
 * XREFs of AccFieldUnit @ 0x1C0016BC0
 * Callers:
 *     <none>
 * Callees:
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     WriteField @ 0x1C00147DC (WriteField.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     AcquireGL @ 0x1C0017278 (AcquireGL.c)
 *     ListInsertTail @ 0x1C0018288 (ListInsertTail.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // r8
  unsigned int *v9; // rsi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD **v14; // r9
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD **v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rcx
  _QWORD **v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int16 v24; // cx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int Field; // eax
  __int64 result; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // r11

  v4 = a3;
  if ( a3 )
    v7 = 3;
  else
    v7 = *(_DWORD *)(a2 + 16) & 0xF;
  v8 = 130LL;
  v9 = *(unsigned int **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return v4;
LABEL_7:
        if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 && ghGlobalLock )
          ghGlobalLock(5LL, 1LL, qword_1C005AAA8);
        if ( (gDebugger & 0xD0) != 0 && (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
        {
          ConPrintf("=");
          PrintObject(*(_QWORD *)(a2 + 40));
        }
        v12 = *(_QWORD *)(a1 + 416);
        v13 = v12 - 16;
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v12 + 8);
        *(_DWORD *)(v12 - 16) = 0;
        byte_1C005AAD8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v14 = (_QWORD **)(v13 + 16);
        v15 = *(_QWORD *)(v13 + 8);
        v16 = *(_QWORD **)(v15 + 40);
        if ( v16 )
        {
          v30 = *(_QWORD **)(v15 + 40);
          while ( v14 >= v30 )
          {
            v30 = (_QWORD *)v30[1];
            if ( v30 == v16 )
            {
              if ( v14 >= v30 )
              {
                ListInsertTail(v13 + 16, v15 + 40);
                goto LABEL_13;
              }
              break;
            }
          }
          *(_QWORD *)(v13 + 24) = v30;
          v32 = (_QWORD *)*v30;
          *v14 = (_QWORD *)*v30;
          v32[1] = v14;
          **(_QWORD **)(v13 + 24) = v14;
          if ( *(_QWORD **)(v15 + 40) != v30 )
            goto LABEL_13;
        }
        else
        {
          *(_QWORD *)(v15 + 40) = v14;
          *(_QWORD *)(v13 + 24) = v13 + 16;
          *v14 = v14;
        }
        *(_QWORD *)(v15 + 40) = v14;
LABEL_13:
        v17 = *(unsigned int *)(v13 + 4);
        v18 = (_QWORD **)(v17 + v13 + 16);
        if ( *(_QWORD ***)(v13 + 24) == v18 )
        {
          *(_DWORD *)(v13 + 4) = *(_DWORD *)(v17 + v13 + 4) + v17;
          ListRemoveEntry(v18, v15 + 40);
        }
        v19 = (__int64)(*v14 - 2);
        v20 = *(unsigned int *)(v19 + 4);
        if ( v13 == v19 + v20 )
        {
          *(_DWORD *)(v19 + 4) = v20 + *(_DWORD *)(v13 + 4);
          ListRemoveEntry(v14, v15 + 40);
          v13 = v33;
        }
        if ( *(_QWORD *)(v15 + 32) <= v13 + (unsigned __int64)*(unsigned int *)(v13 + 4) )
        {
          *(_QWORD *)(v15 + 32) = v13;
          v21 = (_QWORD **)(v13 + 16);
          if ( v21[1] == v21 )
          {
            *(_QWORD *)(v15 + 40) = 0LL;
          }
          else
          {
            v31 = *(_QWORD *)(v15 + 40);
            if ( v21 == (_QWORD **)v31 )
              *(_QWORD *)(v15 + 40) = *(_QWORD *)(v31 + 8);
            *v21[1] = *v21;
            (*v21)[1] = v21[1];
          }
        }
        KeReleaseSpinLock(&gmutHeap, byte_1C005AAD8);
        return v4;
      }
LABEL_25:
      ++*(_DWORD *)(a2 + 16);
      if ( (v9[5] & 0x80000000) != 0 )
        *(_DWORD *)(a2 + 16) |= 0x20000u;
      v25 = (__int64)(v9 + 2);
      v26 = *(_QWORD *)(a2 + 40);
      v27 = *(_QWORD *)(a2 + 32);
      if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
        Field = ReadField(a1, v27, v25, v26);
      else
        Field = WriteField(a1, v27, v25, v26);
      v4 = Field;
      if ( Field == 32772 || a2 != *(_QWORD *)(a1 + 416) )
        return v4;
      goto LABEL_7;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v9 + 58LL) == 130 )
      return PushAccFieldObj(
               a1,
               (__int64)WriteFieldObj,
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 88LL) + 8LL) + 56LL,
               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 88LL) + 8LL) + 88LL) + 8LL),
               *(_QWORD *)(*(_QWORD *)v9 + 88LL) + 16LL,
               8u);
  }
  ++*(_DWORD *)(a2 + 16);
  v22 = v9[5];
  if ( (v22 & 0x80000010) == 0 )
  {
    v23 = *(_QWORD *)v9;
    v24 = *(_WORD *)(*(_QWORD *)v9 + 58LL);
    if ( v24 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 88) + 8LL) + 88LL) + 20LL) & 0x10) == 0 )
        goto LABEL_25;
    }
    else
    {
      if ( v24 != 132 )
        goto LABEL_25;
      v8 = *(_QWORD *)(v23 + 88);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 20LL) & 0x10) == 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 88LL) + 20LL) & 0x10) == 0 )
      {
        goto LABEL_25;
      }
    }
  }
  LODWORD(v22) = v22 | 0x80000000;
  v9[5] = v22;
  result = AcquireGL(a1, v22, v8, a4);
  if ( !(_DWORD)result )
    goto LABEL_25;
  return result;
}
