/*
 * XREFs of EngUnloadImage @ 0x1C025BC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall EngUnloadImage(HANDLE hModule)
{
  ldevUnloadImage(hModule);
}
